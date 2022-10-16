#include <stdio.h>

int main() {
  /*
   * Gets 1 character from stdin (your keyboard),
   * equivalent to getc(stdin) with stdin as an input
   */
  char c;
  c = getchar();

  printf("%c\n", c);

  return 0;
}