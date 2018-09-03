let o = {}

for (let i = 1; i < 500; i++) {
  for (let j = Math.floor(1000/i); j < 10000/i; j++) {
    if ((''+i+j+(i*j)).split('').sort().join('')=='123456789') {
      o[i*j] = true
    }
  }
}

console.log(Object.keys(o).reduce((a,b)=>a+(+b),0))
