package main

import (
  "fmt"
  "math"
)

func main() {
  var a, b int;
  fmt.Scanf("%d %d\n", &a, &b)
  n := 0
  for i := 0; i < a; i++ {
    var m int;
    fmt.Scan(&m)
    n += m
  }
  fmt.Println(math.Ceil(math.Abs(float64(n)) / float64(b)))
}
