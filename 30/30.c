#include <stdio.h>

int main() {
  int pow5[10] = {0,1,32,243,1024,3125,7776,16807,32768,59049};
  int sum = 0;

  for (int i = 2; i < 1000000; i++) {
    int tsum = 0;
    int x = i;
    while (x) {
      tsum += pow5[x%10];
      x /= 10;
    }
    if (tsum == i) sum += i;
  }

  printf("%d\n", sum);
}
