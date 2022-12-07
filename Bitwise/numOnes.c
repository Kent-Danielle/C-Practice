#include <stdio.h>

int numOnes(int n) {
  int res = 0;
  for (int i = 0; i < 32; i++) {
    res += n & 1;
    n = n >> 1;
  }
  return res;
}

int main() {
  printf("%d", numOnes(16));
  return 0;
}