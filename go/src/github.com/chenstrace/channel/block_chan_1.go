package main

import (
	"fmt"
	"time"
)

var ch chan int = make(chan int)

func foo() {
	fmt.Println("foo here 1")
	ch <- 0 // 向ch中加数据，如果没有其他goroutine来取走这个数据，那么挂起foo, 直到main函数把0这个数据拿走
	fmt.Println("foo here 2")

}

func main() {
	go foo()
	fmt.Println("main here 1")
	time.Sleep(5 * time.Second)
	fmt.Println("main here 2")
}
