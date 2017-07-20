#include <stdio.h>

int main() {
  int a = 0;
  int b = 1;
  int c = 0;
  int sum = 0;
  while (b < 4000000) {
    c = a + b;
    a = b;
    b = c;
    if (!(b % 2)) sum += b;
  }
  printf("%d\n", sum);
}
