#include <stdio.h>

int main(int argc, char **argv) {
  /*
   * fputs breakdown
   * f stands for file or the output
   * put stands for putting it(string) into something(output : stdout or file)
   * s stands for string
   *
   * Parameters:
   * String: what ur getting bro
   * FILE pointer: stdout or a file pointer
   */
  FILE *fp1;
  FILE *fp2;

  fp1 = fopen(argv[1], "r");
  fp2 = fopen(argv[2], "w+");

  char s[100];
  fgets(s, 100, fp1);
  fputs(s, fp2);

  rewind(fp2);

  fputs(s, stdout);

  rewind(fp2);

  char o[100];
  fgets(o, 100, fp2);
  printf("%s", o);

  fclose(fp1);
  fclose(fp2);
  return 0;
}