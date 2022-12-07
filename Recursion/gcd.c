#include <stdio.h>

// a smol ; b large
int gcd(int a, int b){
  if (a > b) {
    int temp = b;
    b = a;
    a = temp;
  }

  if (b % a == 0) {
    return a;
  } else {
    return (a, b -1);
  }

}

int main() {
  printf("%d", gcd(9, 3));
  return 0;
}