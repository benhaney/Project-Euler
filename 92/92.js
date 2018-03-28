const f = n => (n == 89 || n == 1) ? n : f(n.split('').reduce((a,b)=>a+(+b*+b),0)+'')
const sqrs = [...Array(10)].map((_,i)=>i*i)
const {assign: s, entries: e} = Object
let m = [...Array(7)].reduce(m=>e(m).reduce((x,[t,c])=>sqrs.reduce((a,b)=>s(a,{[+t+b]: (a[+t+b]||0)+c}),x),{}),{'0':1})
console.log(e(m).slice(1).reduce((a,[k,v]) => f(k) == 89 ? a+v : a, 0))
