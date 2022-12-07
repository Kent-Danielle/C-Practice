#include <stdio.h>


int addNumbers(int a, int b) {
  int carry = (a & b) << 1;
  int result = a^b;
  if (carry == 0)
    return result;
  else
    addNumbers(carry, result);
}

int numOnes(int n) {
  int res = 0;
  for (int i = 0; i < 1000; i++) {
    res += n & 1;
    n = n >> 1;
  }
  return res;
}

int main() {
  int x = 7;
  int y = 1;
  int bitwidth = 4;
  int temp = x & (1 << (bitwidth - 1)) & (y & (1 << (bitwidth - 1)));
  printf("cin: %d cout: %d",
         numOnes(temp),
         numOnes(x & (1 << (bitwidth)) & (y & (1 << (bitwidth))) | temp));
  printf("\n%d", addNumbers(x, y));
  return 0;
}