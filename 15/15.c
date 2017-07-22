#include <stdio.h>

// Where the grid size is n, any path will be 2n segments long to traverse the
// width and height of the grid. So using the binomial coefficient, the
// solution will always be (2n)!/(n!*n!). The factorial of 40 in C is hard to
// compute without overflowing, so we use the product of the sequence instead

#define SIZE 20

int main() {
  long x = 1;
  for (int i = 0; i < SIZE; i++) {
    x = x * (2*SIZE-i) / (i+1);
  }
  printf("%ld\n", x);
}
