let divisors = x => {
  let divs = 0
  let y = Math.sqrt(x)
  for (let i = 1; i <= y; i++) {
    if (!(x % i)) divs += 2
  }
  return divs + 1
}

let tri = 0
for (let i = 1; divisors(tri) <= 500; i++) {
  tri += i
}
console.log(tri)
