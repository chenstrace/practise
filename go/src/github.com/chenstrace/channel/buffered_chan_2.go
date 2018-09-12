package main

import (
	"fmt"
)

func main() {
	ch := make(chan int, 3)
	ch <- 75
	ch <- 92
	ch <- 63
	var count int = 0
	for v := range ch {
		count++
		fmt.Println(count)
		fmt.Println(v)
	}
}
