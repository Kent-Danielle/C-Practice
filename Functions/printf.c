#include <stdio.h>

int main() {
  /*
   * Basic syntax of printf:
   * printf(format string, val...)
   *
   * The number of placeholders (%) ideally should match
   * the number of values placed after the printf
   *
   * If % > val: it prints garbage or 0 or nothing
   * If % < val: it doesn't print the remaining values
   */
  int i = 1;
  double f = 123456.123456;
  double smolf = 1.2;
  char c = 'c';
  printf("Normal demo: %d | %f | %c\n", i, f, c);
  printf("%% > val: %d | %f | %c\n", i);
  printf("%% < val: %d\n", i, f, c);

  /*
   * Numbers could also be formatted in printf
   */
  printf("%f\n", f);
  printf("%.5f\n", f);
  printf("%3.3f\n", f);
  // If formatted string number is less than the actual decimal digit, then it doesn't care.
  // But for digits after the decimal point, it rounds off
  printf("%020.9f\n", f);
  // The number before the decimal point in the format string, includes ALL THE CHARACTERS of the number
  printf("%5.2f\n", smolf);
  printf("%-5.2f\n", smolf);
  printf("%05.2f\n", smolf);

  return 0;
}