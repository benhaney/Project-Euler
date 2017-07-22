#!/usr/bin/env node

const fs = require('fs')
console.log(fs.readFileSync('p022_names.txt').toString().split(',').map(x=>x.slice(1,-1)).sort().reduce((a,b,c)=>a+(c+1)*b.split('').map(z=>z.charCodeAt(0)-64).reduce((m,n)=>m+n,0),0))
