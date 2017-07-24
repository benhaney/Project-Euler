#include <stdio.h>

int gcd(a, b) {
  return b ? gcd(b, a % b) : a;
}

int main() {
  int num = 1;
  int div = 1;
  for (int i = 10; i <= 99; i++) {
    for (int j = i+1; j <= 99; j++) {
      if (i % 10 == j / 10 && ((float)i)/j == ((float)(i/10))/(j%10)) {
        num *= i;
        div *= j;
      }
    }
  }
  printf("%d\n", div/gcd(num,div));
}
