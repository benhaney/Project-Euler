def divisors(x)
  divs = 0
  y = Math.sqrt(x)
  (1..y).each do |i|
    divs += 2 if x % i == 0
  end
  return divs + 1
end

tri, i = 0, 0
until divisors(tri) > 500
  tri += (i += 1)
end

puts tri
