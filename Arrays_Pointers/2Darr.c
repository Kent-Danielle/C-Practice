#include <stdio.h>

int main() {
  /*
   * 2D arrays are arrays of 1D arrays
   * arrayception
   *
   * Quirk:
   * Arrays are contiguously stored in memory
   * therefore, you can theoretically access
   * a 2d array like a 1d array
   *
   * AND!!
   *
   * you can also initialize it with a 1D initializer list instead of 2D
   * but pls dont do this lol
   *
   * This is possible because C doesn't check bounds and
   * the value stored after the last element of a row,
   * will be the first element of the next row, and so on.
   * DONT DO THAT OK!
   *
   * Array X[m][n] is equal to Array Y[m*n] in terms of size in the memory
   * where m is row and n is columns
   */
  int X[2][5] = {{1,2,3,4,5},
                 {6,7,8,9,10}};
  int Y[2][5] = {1,2,3,4,5,6,7,8,9,10};
  // Let's test the theory and access 2D as 1D, but you CANT access 1D as 2D
  for (int i = 0; i < 10; i++){
    printf("%d\t", X[0][i]);
  }
  printf("\n");
  // Refer to Functions/sizeof.c to know more about sizeof
  for (int i = 0; i < sizeof Y / sizeof Y[0]; i++){
    for (int j = 0; j < sizeof Y[i] / sizeof Y[i][0]; j++) {
      printf("%d\t", Y[i][j]);
    }
  }
  printf("\n");

  return 0;
}