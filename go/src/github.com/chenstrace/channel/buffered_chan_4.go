package main

import (
	"fmt"
)

func main() {
	ch := make(chan int, 3)
	ch <- 75
	close(ch)
	ch <- 2
	fmt.Println("panic: send on closed channel")
}
