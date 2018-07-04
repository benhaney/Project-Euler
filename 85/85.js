let s = (x, y) => (x*(x+1)>>1)*(y*(y+1)>>1)
console.log([...Array(100)].map((_,i)=>[...Array(100)].reduce((a,_,j)=>(s(i,j)-2e6)**2<(a[0]-2e6)**2?[s(i,j),j]:a,[0,0])).reduce((a,x,i)=>(x[0]-2e6)**2<(a[0]-2e6)**2?x.concat(i):a,[0,0,0]).slice(1).reduce((a,b)=>a*b,1))
