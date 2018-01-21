def divisors(x)
  divs = 0
  y = Math.sqrt(x)
  for i in (1..y)
    divs += 2 if (x % i == 0)
  end
  return divs + 1
end

tri, i = 0, 0
until divisors(tri) > 500
  tri += (i += 1)
end

print tri, "\n"
