#include <stdio.h>

int main() {
  /*
   * scanf() - reverse of printf
   * gets the desired stuff using the format from the stdin (ur keyboard)
   * and store it into a pointer
   *
   * The format string stuff from printf is
   * still compatible with scanf
   */
  int n;
  scanf("%d", &n);

  printf("%d\n", n);

  return 0;
}