package main

import "fmt"
import "net"

//import "os"
import "time"

var done chan int = make(chan int)

func A(id int, conn net.Conn) {
	//A做的事情是send, recv until 4k
	request_str := "GET /kk.rpm HTTP/1.1\r\nUser-Agent: curl/7.81.0\r\nHost: 10.8.69.70:84\r\nAccept: */*\r\n\r\n"
	count, err := conn.Write([]byte(request_str))
	if err != nil {
		fmt.Println("Error writing A:", err)
	}

	if count >= len(request_str) {
		recv_buf := make([]byte, 1024)
		total_count := 0
		for {
			count, err := conn.Read([]byte(recv_buf))

			if err == nil && count > 0 {
				total_count += count
			}
			if total_count >= 1024 {
				fmt.Println("routine ", id, "recv ", total_count)
				break
			}
		}
	}
	done <- 0
}

func B(id int, conn net.Conn) {
	//B做的事情是close
	time.Sleep( time.Millisecond)
	conn.Close()
}

func C(id int) {
	//C做的事情是connect, send
	request_str := "GET / HTTP/1.1\r\nUser-Agent: curl/7.81.0\r\nHost: 10.8.69.70:84\r\nAccept: */*\r\n\r\n"
	conn, err := net.Dial("tcp", "10.8.69.70:84")
	if err != nil {
		fmt.Println("Error connecting C:", err)
		//os.Exit(1)
	}
	count, err := conn.Write([]byte(request_str))
	if err != nil {
		fmt.Println("Error writing C:", err, count)
	}
}

func main() {
	const THREAD_COUNT = 20
	var conn_arr [THREAD_COUNT]net.Conn

	var err error
	for i := 0; i < THREAD_COUNT; i++ {
		conn_arr[i], err = net.Dial("tcp", "10.8.69.70:84")

		if err != nil {
			fmt.Println("Error connecting A:", err)
			//os.Exit(1)
		}

		go A(i, conn_arr[i])
	}

	for i := 0; i < THREAD_COUNT; i++ {
		<-done
	}
	//here, all rountine complete connect, send, recv 4k

	fmt.Println("recv 4k done")
	time.Sleep(time.Second*5)
	fmt.Println("begin to close")
	for i := 0; i < THREAD_COUNT; i++ {
			go C(i)
			go B(i,conn_arr[i])
	}
	//now, do
	time.Sleep(time.Second*60)
}
