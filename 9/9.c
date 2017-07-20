#include <stdio.h>
#include <math.h>

int main() {
  int a, b;
  double c;
  for (a = 1; a < 500; a++) {
    for (b = a; b < 500; b++) {
      c = sqrt((a*a)+(b*b));
      if (a + b + c == 1000) {
        printf("%d\n", a * b * (int)c);
        return 0;
      }
    }
  }
}
