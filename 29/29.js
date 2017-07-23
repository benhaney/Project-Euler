let o = {}

for (let a = 2; a <= 100; a++) {
  for (let b = 2; b <= 100; b++) {
    o[Math.pow(a,b).toPrecision(10)] = null
  }
}

console.log(Object.keys(o).length)
