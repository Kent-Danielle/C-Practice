#include <stdio.h>

int recursivePower(int x, int n);
int recursiveFactorial(int x);

int main() {
  /**
   * Recursion is used for graph and dp problems
   * "u r calling urself" lol
   * But why?
   * 1. Great style
   * 2. Powerful tool
   * 3. Master of control flow
   *
   * WARNING! You cannot call recursion on main() function!!
   */

  /**
   * Two cases in Recursion:
   * 1. Base Case - "simplest case"
   * can be directly answered;
   * the case that recursive calls reduce to
   * (Hard to figure out)
   *
   * 2. Recursive case - "more comple case"
   * cannot be directly answered;
   * be described in terms of smaller occurrences
   */

  /**
   * Three musts in Recursion:
   * 1. Must have a case for all valid inputs
   * 2. Must have a base case that makes no recursive calls (to avoid infinite loop / stackoverflow)
   * 3. When you make a recursive call, it should be to a SIMPLER instance
   * and make FORWARD progress towards the base case
   */

  printf("%d\n", recursivePower(5, 3));
  printf("%d\n", recursiveFactorial(6));
  printf("%d\n", recursiveFactorial(0));

  return 0;
}

/**
 * Takes in a number x and an exponent n, and
 * returns the result of x^n.
 *
 * @param x as number
 * @param n as exponent
 * @return x^n
 */
int recursivePower(int x, int n) {
  // Base case = when n is 0
  if (n == 0) {
    return 1;
  } else {
    return x * recursivePower(x, n - 1);
  }
}

/**
 * Computes the factorial of a non-negative integer (x) recursively.
 * Returns -1 if x is negative.
 *
 * @param x a non-negative integer
 * @return x!
 */
int recursiveFactorial(int x) {
  // Base case = when x is 1 return 1
  if (x < 0) {
    printf("Illegal negative integer\n");
    return -1;
  }
  if (x == 1 || x == 0) {
    return 1;
  } else {
    return x * recursiveFactorial(x - 1);
  }
}

int recursiveFibonacci(int l, int r, int n) {

}