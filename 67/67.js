const fs = require('fs')
const tri = fs.readFileSync('triangle.txt').toString().split('\n').map(a=>a.split(' ').map(b=>parseInt(b)));

for (let i = tri.length-1; i > 0; i--) {
  for (let j = 0; j < tri[i].length-1; j++) {
    tri[i-1][j] += Math.max(tri[i][j], tri[i][j+1])
  }
}

console.log(tri[0][0])
