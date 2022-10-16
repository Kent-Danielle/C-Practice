#include <stdio.h>

int main() {
  /*
   * Pointers:
   * - Used everywhere
   *
   * Pointer operators:
   * 1. & unary operator - generates a pointer to the thing next to it (no spaces)
   * 2. * unary operator - dereferences a pointer aka gets/returns the value that the pointer is pointing at
   * the first time a unary operator is used, it's used for declaration/initialization
   *
   */
  int *p; // a pointer to an int
  double *q; // a pointer to a double
  char **r; // a pointer to a pointer to a char

  /*
   * Pointer declarations - read from right to left?
   */
  const int *x;
  // x is a pointer to an integer constant
  // pointer can change; the thing it points to can't
  int * const y;
  // y is a constant pointer to an integer variable
  // pointer cannot change; the thing it points to can
  const int * const * z;
  // z is a constant pointer to an integer constant
  // pointer and the thing it points to can't change

  /* POINTER ARITHMETIC */
  // C never checks if the resulting pointer is valid so be careful
  int *a, *b, *c;
  a = b + 1;
  // Construct a pointer to the next integer after b and assign it to a
  int n;
  b = c + n;
  // Construct a pointer to an integer that is "n" integers beyond (aka 4 bytes beyond) c and assign it to b
  a--;
  b++;
  // Increment a to the next integer
  // Decrement b to the previous integer
  n = a - b;
  // n is equal to the number of integer between a and b;
  // What would be added to q to get p? n.

  return 0;
}