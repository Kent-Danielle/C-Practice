#include <stdio.h>


void q2() {
  int time = 500;
  int n = 50;
  for (int i = 6; i <= (2*n) + 1; i++) {
    time = time + (3 * i);
    for (int k = 0; k <= n + 2; k++) {
      time = time + (6 * i);
    }
  }
  printf("q2 %d\n", time);
}

void q3() {
  int time = 1000;
  int n = 50;
  for (int i = 1; i <= n; i++) {
    time = time + 2;
    for (int k = 3; k <= i + 6; k++) {
      time = time + (12 * k);
    }
  }
  printf("q3 %d\n", time);
}

void q4() {
  int time = 1000;
  int n = 50;
  for (int i = 1; i <= n; i++) {
    time = time + 2;
    for (int k = 11; k <= i + 6; k++) {
      time = time + (12 * k);
    }
  }
  printf("q4 %d\n", time);
}

int main() {

  //q2();
  //q3();
  q4();

  return 0;
}