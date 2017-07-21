#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>

#define MAXLIMIT 2000000
#define SQRTLIMIT 1414

// Uses a sieve of Eratosthenes with one byte per number to save on
// bit slicing operations at the cost of way more memory use.

// Without compiler optimization, this is significantly faster than
// 10.c. With compiler optimization, 10.c is about as fast as this


bool isPrime(int x) {
  if (x < 3) return true;
  int s = sqrt(x);
  for (int i = 2; i <= s; i++) {
    if (x % i == 0) return false;
  }
  return true;
}

int main() {
  uint8_t *b = calloc(MAXLIMIT, 1);
  long sum = 0;
  for (int i = 2; i < MAXLIMIT; i++) {
    if (b[i]) continue;
    if (i > SQRTLIMIT || isPrime(i)) {
      sum += i;
      if (i < SQRTLIMIT) {
        for (int j = i+i; j < MAXLIMIT; j += i) {
          b[j] = 1;
        }
      }
    }
  }
  printf("%ld\n", sum);
  free(b);
}
