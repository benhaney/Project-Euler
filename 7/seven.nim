proc isPrime(x: int): bool =
  result = true
  var c = 3
  while c*c <= x:
    if x mod c == 0:
      result = false
      return
    c += 2

var primes = 0
var i = 1
while primes < 10000:
  i += 2
  if isPrime(i):
    inc primes
echo i
