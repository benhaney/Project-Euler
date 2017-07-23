#include <stdio.h>
#include <vector>

// Gonna use C++ for this one because vectors

int main() {

  std::vector<int> abun;

  for (int i = 1; i < 28123; i++) {
    int div_sum = 1;
    for (int j = 2; j*j <= i; j++) {
      if (!(i % j)) div_sum += j + (j*j!=i)*(i/j);
    }
    if (div_sum > i) {
      abun.push_back(i);
    }
  }

  bool nums[28124] = {0};

  for (int i = 0; i < abun.size(); i++) {
    for (int j = 0; j <= i; j++) {
      if (abun[i]+abun[j] < 28124) nums[abun[i]+abun[j]] = true;
    }
  }

  int sum = 0;

  for (int i = 1; i < 28124; i++) {
    if (!nums[i]) sum += i;
  }

  printf("%d\n", sum);
}
