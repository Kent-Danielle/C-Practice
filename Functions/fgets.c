#include <stdio.h>

int main(int argc, char **argv) {
  /*
   * fgets - lets dumb it down
   * f stands for file
   * get stands for getting u stupid fuck
   * s stands for string
   *
   * What it do? of course, get a string from the file.
   *
   * Parameters:
   * String (or maybe a pointer?): where to save the stuff u getting
   * Integer: number of characters to copy
   * FILE pointer: stdin or a file pointer
   *
   * IT ALSO MOVES THE POINTER!!! as long as it is not EOF
   * so it's similar to fgetc in assignment 1
   */
  FILE *fp;

  fp = fopen(argv[1], "r");

  char s[100];

  fgets(s, 5, fp);
  printf("%s\n", s);
  fgets(s, 5, fp);
  printf("%s\n", s);
  fgets(s, 5, fp);
  printf("%s\n", s);
  fgets(s, 5, fp);
  printf("%s\n", s);

  return 0;
}