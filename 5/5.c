#include <stdio.h>
#include <stdbool.h>

bool isDiv20(x) {
  // Higher divisors are more likely to fail to divide cleanly, so do them
  // first so we can bail out of the function earlier in most cases
  for (int div = 19; div > 2; div--) {
    if (x % div != 0) return false;
  }
  return true;
}

int main() {
  int x;
  for (x = 20; !isDiv20(x); x += 20);
  printf("%d\n", x);
}
