package main

import (
	"fmt"
)

var ch chan int = make(chan int, 2)

func main() {
	ch <- 1
	ch <- 2
	ch <- 3
	fmt.Println("can not be here")
}
