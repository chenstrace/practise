package main

import (
	"fmt"
	"math/rand"
	"time"
)

func main() {
	rand.Seed(time.Now().UTC().UnixNano())
	serverIndex := rand.Intn(100)
	fmt.Println(serverIndex)
}
