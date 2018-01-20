#include <math.h>
#include <stdio.h>

int divisors(int x) {
  int divs = 0;
  int y = sqrt(x);
  for (int i = 1; i <= y; i++) {
    if (!(x % i)) { divs += 2; }
  }
  return divs + 1;
}

int main() {
  int tri = 0;
  for (int i = 1; divisors(tri) <= 500; i++) {
    tri += i;
  }
  printf("%d\n", tri);
}
