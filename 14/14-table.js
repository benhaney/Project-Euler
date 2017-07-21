#!/usr/bin/env node

const table = {}

let collatz = num => {
  let n = num
  for (var i = 0; n > 1; i++) {
    if (table[n]) {
      i += table[n]
      break
    } else {
      n = (n && !(n % 2)) ? n / 2 : (n * 3) + 1
    }
  }
  if (!table[num]) table[num] = i
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
