package main

import (
	"fmt"
)

var ch chan int = make(chan int)

func main() {
	var i int
	fmt.Println("main here 1")
	i = <-ch // 从ch取数据，如果ch中还没放数据，那就挂起main线，直到foo函数中放数据为止
	fmt.Println("main here 2")
	fmt.Println(i)
}
