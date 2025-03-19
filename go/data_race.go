package main

import (
    "fmt"
    "sync"
    "time"
)

type DeviceInfo struct {
    ID                     string
    Description            string
    IPList                 []string

}

type SharedContext struct {
    mu           sync.RWMutex
    DevicesByType map[string]map[string]*DeviceInfo
}

func (c *SharedContext) GetDevicesByType(deviceType string) map[string]*DeviceInfo {
    c.mu.RLock()
    defer c.mu.RUnlock()
    devices, exists := c.DevicesByType[deviceType]
    if !exists {
        return nil
    }
    result := make(map[string]*DeviceInfo, len(devices))
    for id, device := range devices {
        result[id] = device
    }
    return result
}

func (c *SharedContext) UpdateDevices(deviceType string, devices map[string]*DeviceInfo) {
    c.mu.Lock()
    defer c.mu.Unlock()
    c.DevicesByType[deviceType] = devices
}

func main() {
    ctx := &SharedContext{
        DevicesByType: make(map[string]map[string]*DeviceInfo),
    }

    // 初始化设备数据
    initialDevices := map[string]*DeviceInfo{
        "device1": {
            ID:          "device1",
            Description: "Initial description (data1)",
            IPList:      []string{"192.168.1.1"},
        },
    }
    ctx.UpdateDevices("FOS", initialDevices)

    // 同步通道
    ready := make(chan bool)
    done := make(chan bool)

    // 读取goroutine
    go func() {
        fmt.Println("Reader: Getting devices...")
        devices := ctx.GetDevicesByType("FOS")
        device := devices["device1"]

        // 在这里记录我们应该读取的数据
        expectedDescription := device.Description
        expectedIPs := make([]string, len(device.IPList))
        copy(expectedIPs, device.IPList)

        fmt.Printf("Reader: Supposed to read description: %s\n", expectedDescription)
        fmt.Printf("Reader: Supposed to read IPs: %v\n", expectedIPs)

        // 发出信号，允许更新goroutine执行
        ready <- true

        // 加大延迟，确保更新goroutine有足够时间执行
        time.Sleep(500 * time.Millisecond)

        // 现在读取设备数据，可能已经被更新了
        fmt.Printf("Reader: But eventually read description: %s\n", device.Description)
        fmt.Printf("Reader: But eventually read IPs: %v\n", device.IPList)

        // 显示对比
        if expectedDescription != device.Description {
            fmt.Println("\n### DATA RACE DETECTED: Description changed! ###")
        }
        if !sliceEqual(expectedIPs, device.IPList) {
            fmt.Println("### DATA RACE DETECTED: IP list changed! ###")
        }

        done <- true
    }()

    // 更新goroutine - 这次我们直接修改现有的DeviceInfo对象
    go func() {
        // 等待读取goroutine获取设备后才执行
        <-ready

        fmt.Println("Writer: Modifying existing device...")

        // 获取当前的设备映射
        devices := ctx.GetDevicesByType("FOS")
        // 直接修改现有的DeviceInfo对象
        device := devices["device1"]
        device.Description = "Updated description (data2)"
        device.IPList = []string{"10.0.0.1"}

        // 更新上下文中的设备映射（这里保持指针不变，仅更新内容）
        ctx.UpdateDevices("FOS", devices)

        fmt.Println("Writer: Device modified to data2")

        done <- true
    }()

    // 等待两个goroutine完成
    <-done
    <-done
}

func sliceEqual(a, b []string) bool {
    if len(a) != len(b) {
        return false
    }
    for i := range a {
        if a[i] != b[i] {
            return false
        }
    }
    return true
}