#!/usr/bin/env node

let collatz = n => {
  for (var i = 0; n > 1; i++) {
    n = (n && !(n % 2)) ? n / 2 : (n * 3) + 1
  }
  return i
}

let high = [0,0]
for (let i = 1; i < 1000000; i += 2) {
  let x = collatz(i)
  if (x > high[1]) {
    high = [i, x]
  }
}

console.log(high[0])
