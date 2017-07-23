#include <stdio.h>

int main() {
  int sum = 1;
  int d1 = 1;
  int d2 = 1;
  for (int i = 1; i < 1001; i++) {
    d1 += 2*i;         // lower left to upper right diagonal
    d2 += 4*((i+1)/2); // upper left to lower right diagonal
    sum += d1 + d2;
  }
  printf("%d\n", sum);
}
