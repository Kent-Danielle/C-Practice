#include <stdio.h>

void towerOfHanoi(int nums, char src, char dest, char aux);

int main() {
  towerOfHanoi(3, 'a', 'b', 'c');
  return 0;
}

/*
 * Steps
 * (1)
 * || || ||
 * [] || ||
 * -- || ||
 * (2)
 * || || ||
 * || || ||
 * -- [] ||
 * (3)
 * || || ||
 * || || ||
 * || [] --
 * (4)
 * || || ||
 * || || []
 * || || --
 */
void towerOfHanoi(int nums, char src, char dest, char aux) {
  // Base case = when nums = 0 "No disks to move"
  if (nums == 0) {
    return;
  }

 towerOfHanoi(nums-1,src,dest,aux);
 printf("%c to %c\n", src, dest);
 towerOfHanoi(nums-1,aux,dest,src);

}