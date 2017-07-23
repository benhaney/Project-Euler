let d = [0,1,2,3,4,5,6,7,8,9]
let fac = n => n > 1 ? n * fac(n - 1) : 1
let f = (a,i) => Math.floor((999999-a)/fac(i))
console.log([...Array(9)].map((_,i)=>9-i).reduce((a,b)=>[a[0]+(d.splice(f(a[1],b),1)[0]),a[1]+fac(b)*f(a[1],b)],['',0])[0]+d[0])
