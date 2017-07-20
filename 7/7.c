#include <stdio.h>
#include <stdbool.h>

bool isPrime(int x) {
  for (int c = 3; c*c <= x; c+=2) {
    if (x % c == 0) return false;
  }
  return true;
}

int main() {
  int i;
  int primes = 0;
  // 10000 instead of 10001 because we're skipping '2'
  for (i = 3; primes < 10000; i+=2) {
    if (isPrime(i)) {
      primes++;
    }
  }
  printf("%d\n", i-2);
}
