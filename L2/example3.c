#include <stdio.h>

int main() {
  int x[1][1] = {1};
  int *xp = (int *) x;
  int y = x[0][0];
  printf("%d\n", *xp);
  return 0;
}
