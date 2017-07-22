#!/usr/bin/env node

const fs = require('fs')

const cipher = fs.readFileSync('cipher.txt').toString().split(',').map(x=>parseInt(x))
const perms = Math.pow(26, 3)

for (let i = 0; i < perms; i++) {
  const p = []
  let o = ''
  p.push((Math.floor(i/Math.pow(26,2))%26)+97)
  p.push((Math.floor(i/26)%26)+97)
  p.push((i%26)+97)
  for (let j in cipher) {
    o += String.fromCharCode(cipher[j]^p[j%3])
  }
  if (o.match(/\ and\ /)) {
    let a = 0;
    for (let j in cipher) {
      a += cipher[j]^p[j%3]
    }
    console.log(a)
    break
  }
}
