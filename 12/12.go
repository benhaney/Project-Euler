package main

import (
  "fmt"
  "math"
)

func divisors(x int) int {
  divs := 0
  y := int(math.Sqrt(float64(x)))
  for i := 1; i <= y; i++ {
    if x % i == 0 { divs += 2 }
  }
  return divs + 1
}

func main() {
  tri := 0
  for i := 1; divisors(tri) <= 500; i++ {
    tri += i
  }
  fmt.Println(tri)
}
