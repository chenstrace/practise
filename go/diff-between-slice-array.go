package main

import (
	"fmt"
)

func main() {

	a := [2]int{1, 2}
	fmt.Printf("a addr is %p\n", &a[0])
	b := a
	fmt.Printf("b addr is %p\n", &b[0])

	b[1] = 100
	fmt.Println(a)
	fmt.Println(b)

	x := []int{1, 2}
	fmt.Printf("x addr is %v\n", &x[0])
	y := x
	fmt.Printf("y addr is %v\n", &y[0])
	y[1] = 100
	fmt.Println(x)
	fmt.Println(y)
}
