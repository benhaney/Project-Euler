import Foundation

func divisors(x: Int) -> Int {
  var divs = 0
  let y = Int(sqrt(Double(x)))
  for i in 1...y {
    if (x % i == 0) { divs += 2 }
  }
  return divs + 1
}

var tri = 1
var i = 1
while divisors(x: tri) <= 500 {
  i += 1
  tri += i
}
print(tri)
