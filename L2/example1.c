#include <stdio.h>

int main(){
  int x[] = {1,2,3,43,45,6,7,89,10};
  int z = 266;
  int y = z - x[3]*x[5];
  printf("%d\n", y);
  return 0;
}
