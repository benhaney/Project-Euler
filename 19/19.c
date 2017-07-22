#include <stdio.h>

int main() {
  int dayOfWeek = 1; // 0 == Sunday
  int dayOfMonth = 1;
  int month = 0; // 0 = Jan
  int year = 1900;
  int monthLengths[] = {31,28,31,30,31,30,31,31,30,31,30,31};
  int firstSundays = 1;
  
  while (year <= 2000) {
    dayOfWeek = (dayOfWeek + 1) % 7;
    dayOfMonth++;
    if (dayOfMonth > monthLengths[month]) {
      dayOfMonth = 1;
      month++;
      if (month > 11) {
        month = 0;
        year++;
      }
      if (month == 1) {
        monthLengths[1] = (year % 4 == 0 && year % 400 != 0) ? 29 : 28;
      }
    }
    // Given starting point is first day of 1900, but not supposed to start
    // counting until first day of 1901 (???)
    if (dayOfMonth == 1 && dayOfWeek == 0 && year > 1900) firstSundays++;
  }
  printf("%d\n", firstSundays);
}
