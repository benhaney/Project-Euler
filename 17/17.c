#include <stdio.h>

int ones[10] = {0,3,3,5,4,4,3,5,5,4};
int tens[10] = {0,3,6,6,5,5,5,7,6,6};
int huns[10] = {0,13,13,15,14,14,13,15,15,14};

int length(int input) {
  int length = 0;
  // Ones place
  length += ones[input % 10];
  // Tens place
  length += tens[input % 100 / 10];
  // Special case teens
  length += (input % 100 == 17 || input % 100 == 16 || input % 100 == 14 || input % 100 == 19 );
  // Hundreds place
  length += huns[input / 100];
  if (input >= 100 && input % 100 == 0) { length -= 3; } // No "and"

  if (input == 1000) return 11;
  return length;
}

int main() {
  int total = 0;
  for (int i = 1; i < 1001; i++) {
    total += length(i);
  }
  printf("%d\n", total);
}
