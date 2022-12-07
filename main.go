package main

// #include "wrap_sum.hxx"
import "C"

import "fmt"

func main() {

	a := 5
	b := 10
	sum := C.sum_from_cplus(C.int(a), C.int(b))
	fmt.Printf("Go has result, sum is: %v\n", sum)
}
