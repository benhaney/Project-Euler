#include <stdio.h>

int collatz(long n) {
  int i;
  for (i = 0; n != 1; i++) {
    n = (n && !(n % 2)) ? n / 2 : (n * 3) + 1;
  }
  return i;
}

int main() {
  int highest[2] = {0,0};
  for (int i = 1; i < 1000000; i += 2) {
    int x = collatz(i);
    if (x > highest[1]) {
      highest[0] = i;
      highest[1] = x;
    }
  }
  printf("%d\n", highest[0]);
}
