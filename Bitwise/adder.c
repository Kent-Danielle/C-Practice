#include <stdio.h>


int adder(int a, int b) {
  // Add two 4 bit numbers
  int res = 0;
  int cin;
  for (int i = 0; i < 4; i++) {
    res = (a & (1 << i)) ^ (b & (1 << i)) ^ cin;
    cin = (a & (1 << i)) & (b & (1 << i)) | (res & (1 << i));
  }
  return res;
}

int main() {
  printf("%d", adder(1, 1));
  return 0;
}