#include <stdio.h>

int main() {
  /*
   * sizeof - returns # of bytes of memory required by operand
   * returns an unsigned long
   *
   * sizeof() = size of the type inside ()
   * sizeof obj = size of the object
   */
  int x = 10;
  int xarr[5];

  printf("%lu\n", sizeof(int));
  printf("%lu\n", sizeof x);
  // Prints the same thing because x is also an int
  printf("%lu\n", sizeof xarr);
  // Doesn't print the same thing because xarr is an integer array of size 5

  /*
   * To get the length of an array:
   * Divide sizeof array with sizeof its type
   *
   * Refer to Array_Pointers/2Darr.c to learn how to get size of multidimensional arrays
   */
  printf("%lu\n", sizeof xarr / sizeof xarr[0]);

  /*
   * Getting sizeof dynamically allocated arrays are not supported
   */
  return 0;
}