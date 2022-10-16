#include <stdio.h>
#define n 5

int B1[20];

int main(int argc, char **argv) {
  /*
   * What is an array?
   * Collection of objects of the same type
   * stored CONTIGUOUSLY in memory under one name
   *
   * Can be stored in Stack or Static Data in memory
   * depending if the size is determined at compile-time or run-time
   * * Compile-time - static data
   *   - Mostly global stuff?
   * * Run-time - Stack
   *   - Stuff inside functions that relies on expression
   */
  int nums1[10]; // Declared an explicitly sized integer array
  int nums2[] = {1, 2, 3}; // Declared an implicitly sized integer array

  int A[5] = {1,2,3,4,5};
  // Static (because of the explicit size) or Automatic (because of the initializer list
  int B2[20] = {1,2,3,4,5};
  int B3[20];
  /*
   * We have 3 arrays named B, all explicitly sized. What are their values?
   * B1 - all zeroes because it is global
   * B2 - aside from the values in the initializer list, it's followed by all zeroes as well
   * B3 - whatever was there before, because it means "take the ownership of 20-int-sized area of memory without doing any initialization"
   * Proof below:
   */
  printf("First: %d\tSecond: %d\n", B1[0], B1[19]);
  printf("First: %d\tSecond: %d\n", B2[0], B2[19]);
  printf("First: %d\tSecond: %d\n", B3[0], B3[19]);

  // int C[1] = {1,2,3};
  // Compiler error - compiler detects too many initial values
  // but it will still run in debug mode, crash it by calling gcc manually

  // int n;
  int D[3] = {1*n, 2*n, 3*n};
  // Automatic only; array initialized to expressions
  int E[n] = {1};
  // Automatic only ; E[0] will be initialized to 0 though
  // for some reason C99 cockblocks this to prevent stupidity; used macro instead to not show errors lmao

  return 0;
}