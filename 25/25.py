a, b, c, d = 0, 1, 1, 10**999
while b < d:
  a, b, c = b, a + b, c + 1
print c
