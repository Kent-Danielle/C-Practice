#include <stdio.h>
#include <math.h>

int concat( int n){
  int res = 0;
  int bitshift = 0;
  for (int i = 1; i <= n; i++) {
    res = (res << (((int) log2(i)) + 1)) + i;
  }
  return res;
}

int sumOfDigits(int n) {
  return n == 0 ? 0 : sumOfDigits(n / 10) + n % 10;
}

int main() {
  printf("%d\n", concat(3));
  return 0;
}