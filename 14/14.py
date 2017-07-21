def collatz(num):
  length = 1
  while num > 1:
    num = num/2 if num % 2 == 0 else 3 * num + 1
    length += 1
  return length

longest = (0,0)
for i in xrange(1000000):
  length = collatz(i)
  longest = (i, length) if length > longest[1] else longest
print longest[0]
