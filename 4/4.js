#!/usr/bin/env node

let pal = x => {
  let revx = 0
  let tmpx = x
  while (tmpx > 0) {
    revx = revx * 10 + (tmpx % 10)
    tmpx = parseInt(tmpx/10)
  }
  return x == revx
}

let largest = 0
for (let i = 100; i < 1000; i++) {
  for (let j = i; j < 1000; j++) {
    let k = i * j
    if (k > largest && pal(k)) largest = k
  }
}
console.log(largest)
