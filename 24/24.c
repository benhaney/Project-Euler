// 999999 = 2*9! + 6*8! + 6*7! + 2*6! + 5*5! + 1*4! + 2*3! + 1*2! + 1*1! + 0*0!
//
// So the indices of the digits we have to extract are 2,6,6,2,5,1,2,1,1,0
//
//   0 1 2 3 4 5 6 7 8 9
// 2   0 1 3 4 5 6 7 8 9  2
// 2 7   0 1 3 4 5 6 8 9  6
// 2 7 8   0 1 3 4 5 6 9  6
// 2 7 8 3   0 1 4 5 6 9  2
// 2 7 8 3 9   0 1 4 5 6  5
// 2 7 8 3 9 1   0 4 5 6  1
// 2 7 8 3 9 1 5   0 4 6  2
// 2 7 8 3 9 1 5 4   0 6  1
// 2 7 8 3 9 1 5 4 6   0  1
// 2 7 8 3 9 1 5 4 6 0    0
//
// So the answer is 2783915460
//
// Now let's do it in code

#include <stdio.h>

int digits[10] = {0,1,2,3,4,5,6,7,8,9};
int out[10] = {0,0,0,0,0,0,0,0,0,0};

int factorial(int n) {
  return (n > 1) ? n*factorial(n-1) : 1;
}

int main() {
  int sum = 0;

  for (int i = 9; i > 0; i--) {
    int fac = factorial(i);
    int index = (999999-sum)/fac;
    out[9-i] = digits[index];
    sum += fac*index;
    for (int j = index; j < 9; j++) {
      digits[j] = digits[j+1];
    }
  }
  out[9] = digits[0];
  for (int i = 0; i < 10; i++) {
    printf("%d", out[i]);
  }
  printf("\n");
}
