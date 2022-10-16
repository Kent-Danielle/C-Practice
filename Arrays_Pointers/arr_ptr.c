#include <stdio.h>

int main() {
  /*
   * Array is just a pointer lol
   * Specifically, a pointer to the zeroth element of it
   */
  int A[10] = {1,2,3,4,5};
  int *p;
  int n = 2;
  p = A; // this is valid, and *p = A[0] would be the result
  /* Theoretically, A = p would also be valid but the IDE is bitching about it
   * because there's no guarantee that p is pointing to an array of the same size and type
   */
  printf("%d\t%d\t%d\n", p, &A, &A[0]); // to prove that an array is just a pointer to the zeroth element
  printf("%d\t%d\n", *p, A[0]);
  printf("%d\t%d\n", *(p + n), A[n]);
  // The same thing after line 11
  // p = &A[n]; would be the same as p = A + n, note that it's not using the * operator so it must be manipulating the address itself

  // An array and a pointer are the same when passed in a function

  return 0;
}