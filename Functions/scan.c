#include <stdio.h>

int main() {
  /*
   * Scan functions take in a format string and gets stuff
   * from either file pointers or stdout
   * (depending on the specific scan function ur using)
   *
   * A BIG FUCKING NOTE when using scanf funcs in arrays:
   * You're not specifying the size of the buffer and it's UNSAFE
   * so you should always format it so that it the string only reads n - 1 characters
   * where n is the length of the string variable you're using.
   *
   * It also adds the '\0' at the end, making an array into a string
   */

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

  /*
   * Problem: what if I have an array of size 20
   * how would I handle an overflow input from scanf?
   * Solution: Use formatting and specify
   * the number of characters you want would be
   * length of the string - 1.
   *
   * there's a minus 1, because every scan functions
   * adds the '\0' at the end
   */

  /*
   * Variations:
   * fscanf(): used to scan to a file and reads until any blank space, not newline unlike fgets
   * sscanf(): used to print to a string, from a string
   */


  return 0;
}