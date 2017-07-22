#!/usr/bin/env node

let ams = Array(10000).fill(0)
for (let n = 0; n < 10000; n++) {
  for (let i = 0; i < n; i++) {
    if (!(n % i)) ams[n] += i
  }
}

let answer = 0
for (let i = 0; i < 10000; i++) {
  if (ams[ams[i]] == i && ams[i] != i) answer += i
}

console.log(answer)
