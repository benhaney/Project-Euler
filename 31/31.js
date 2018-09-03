let f = (x, a) => {
  if (!x) return 1
  if (!a.length || x < 0) return 0
  return f(x, a.slice(1)) + f(x - a[0], a)
}

console.log(f(200, [1,2,5,10,20,50,100,200]))
