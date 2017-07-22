#include <stdio.h>

#define SIZE 10000

int main() {
  int ams[SIZE] = {0};
  for (int n = 0; n < SIZE; n++) {
    for (int i = 1; i < n; i++) {
      if (!(n%i)) ams[n] += i;
    }
  }

  int answer = 0;
  for (int i = 1; i < SIZE; i++) {
    if (ams[i] < 10000 && ams[ams[i]] == i && ams[i] != i) answer += i;
  }

  printf("%d\n", answer);
}
