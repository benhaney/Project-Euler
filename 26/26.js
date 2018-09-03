let rep = n => {
  let prev = {}
  let m = 10
  let x = 0
  while (!prev[m % n]) {
    prev[m % n] = true
    m = (m % n) * 10
    if (m == 0) return 0 
    x++
  }
  return x
}

let max = [0,0]
// In general, the denominator in a range of denominators with the largest repeating decimal is going to be near the
// maximum value of the range, and have a repeating length close to the value of the denominator itself. We can
// therefore save a lot of checks by starting from the top of the range, working down, and bailing out early when our
// denomitors start being smaller than the length of the longest repeating decimal seen so far (as the length of the
// repeating decimal can't be larger than the denominator itself)
for (let i = 999; i > 0; i--) {
  if (i < max[1]) break
  let x = rep(i)
  if (x > max[1]) max = [i, x]
}

console.log(max[0])
