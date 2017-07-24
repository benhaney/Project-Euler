#include <stdio.h>

int fac[10] = {1,1,2,6,24,120,720,5040,40320,362880};

int main() {
  int sum = 0;
  for (int i = 10; i < fac[9]*7; i++) {
    int tsum = 0;
    int x = i;
    while (x) {
      tsum += fac[x % 10];
      x /= 10;
    }
    if (tsum == i) sum += i;
  }
  printf("%d\n", sum);
}
