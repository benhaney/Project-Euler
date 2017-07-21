#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
  int revx = 0;
  int tmpx = x;
  while (tmpx > 0) {
    revx = revx * 10 + (tmpx % 10);
    tmpx /= 10;
  }
  return x == revx;
}

int main() {
  int largest = 0;
  for (int i = 100; i < 1000; i++) {
    for (int j = i; j < 1000; j++) {
      if (i*j > largest && isPalindrome(i*j)) {
        largest = i*j;
      }
    }
  }
  printf("%i\n", largest);
}
