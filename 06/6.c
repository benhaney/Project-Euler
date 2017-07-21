#include <stdio.h>
#include <math.h>

int main() {
  int sumOfSquares = 0;
  int squareOfSum = 0;
  for (int i = 1; i <= 100; i++) {
    sumOfSquares += pow(i, 2);
    squareOfSum += i;
  }
  squareOfSum = pow(squareOfSum, 2);
  printf("%d\n", squareOfSum - sumOfSquares);
}
