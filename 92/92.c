#include <stdio.h>

int sumsquare(int n) {
  int ret = 0;
  while (n != 0) {
    ret += (n%10)*(n%10);
    n = n/10;
  }
  return ret;
}

int main() {
  int r = 0;
  for (int i = 1; i < 10000000; i++) {
    int j = i;
    while (j != 1 && j != 89) {
      j = sumsquare(j);
    }
    if (j == 89) { r++; }
  }
  printf("%d\n", r);
}
