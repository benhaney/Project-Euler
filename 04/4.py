#!/usr/bin/env python

largest = 0
for i in xrange(100, 1000):
  for j in xrange(i, 1000):
    x = i * j
    if x > largest and str(x)[::-1] == str(x):
      largest = x

print largest
