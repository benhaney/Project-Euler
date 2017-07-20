#include <stdio.h>

int main() {
  long n = 600851475143;
  int d = 3;
  while (d * d < n) {
    (n % d == 0) ? (n /= d) : (d += 2);
  }
  printf("%ld\n", n);
}
