#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>

#define MAXLIMIT 2000000
#define SQRTLIMIT 1414

// This solution is a compromise between speed and memory usage, using
// a sieve of Eratosthenes. Instead of using 1 byte per number in the
// list, we use 1 bit for an 8th of the memory usage (250kB instead of
// 2MB), at the cost of several extra operations per access.

// With compiler optimization, this is actually about as fast as 10-fast.c

bool isPrime(int x) {
  if (x < 3) return true;
  int s = sqrt(x);
  for (int i = 2; i <= s; i++) {
    if (x % i == 0) return false;
  }
  return true;
}

bool bit_get(uint8_t *arr, int i) {
  return ((arr[i/8] >> (i % 8)) % 2);
}

void bit_set(uint8_t *arr, int i) {
  arr[i/8] |= (0b1 << (i % 8));
}

int main() {
  uint8_t *b = calloc(MAXLIMIT/8, 1); // bit array
  long sum = 0;
  for (int i = 2; i < MAXLIMIT; i++) {
    if (bit_get(b, i)) continue;
    if (i > SQRTLIMIT || isPrime(i)) {
      sum += i;
      if (i < SQRTLIMIT) {
        for (int j = i+i; j < MAXLIMIT; j += i) {
          bit_set(b, j);
        }
      }
    }
  }
  printf("%ld\n", sum);
  free(b);
}
