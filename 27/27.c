#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
  if (n < 1) return false;
  for (int i = 3; i*i <= n; i+=2) {
    if (!(n % i)) return false;
  }
  return true;
}

int main() {
  int largest[2] = {0,0};
  for (int a = -999; a < 1000; a++) {
    for (int b = -1000; b <= 1000; b++) {
      int n;
      for (n = 0;; n++) {
        if (!isPrime(pow(n, 2)+a*n+b)) break;
      }
      if (n > largest[1]) {
        largest[0] = a*b;
        largest[1] = n;
      }
    }
  }
  printf("%d\n", largest[0]);
}
