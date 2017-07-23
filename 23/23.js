#!/usr/bin/env node

let abun = []

for (let i = 1; i < 28123; i++) {
  let div_sum = 1
  for (let j = 2; j*j <= i; j++) {
    if (!(i % j)) div_sum += j + (j*j!=i)*(i/j)
  }
  if (div_sum > i) {
    abun.push(i)
  }
}

let nums = new Uint8Array(28124).fill(1)

for (let i = 0; i < abun.length; i++) {
  for (let j = 0; j <= i; j++) {
    if (abun[i]+abun[j] < 28124) nums[abun[i]+abun[j]] = 0
  }
}

console.log(nums.reduce((a,b,c)=>a+b*c,0))
