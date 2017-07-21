#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Brute force solution without a sieve. Is *far* slower than the other solutions but is O(1) memory usage instead of O(n)

bool isPrime(int x) {
  int s = sqrt(x);
  for (int i = 2; i <= s; i++) {
    if (x % i == 0) return false;
  }
  return true;
}

int main() {
  long sum = 0;
  for (int i = 2; i < 2000000; i++) {
    if (isPrime(i)) sum += i;
  }
  printf("%li\n", sum);
}
