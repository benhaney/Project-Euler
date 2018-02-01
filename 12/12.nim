import math

proc divisors(x: int): int =
  var divs = 0
  let y = sqrt(float(x))
  for i in 1..int(y):
    if x mod i == 0:
      divs += 2
  divs + 1

var
  tri = 0
  i = 1
while divisors(tri) <= 500:
  tri += i
  i += 1
echo tri
