from math import sqrt

def divisors(x):
    divs = 0
    y = int(sqrt(x))
    for i in range(1, y):
        if (x % i) == 0:
            divs += 2
    return divs + 1

tri = 0
i = 1
while divisors(tri) <= 500:
    tri += i
    i += 1

print(tri)
