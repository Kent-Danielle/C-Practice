#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../print_array.h"

/*
 Notes:
 Generics - general purpose; reduces code duplication
 Need to pass size_t nbytes to deal with unknown byte;
 Need memcpy or memmove to copy specified amount of bytes; // Replaces temp = *pt1 because we
 cant dereference a void *;
 */

/*
// Similar to memcpy BUT supports overlap
void *memmove(void *dest, const void *src, size_t nbytes) {

}

// U have to malloc before memcpy DOESN'T support overlap
void *memcpy(void *dest, const void *src, size_t nbytes) {

}
*/
void swap(void *pt1, void *pt2, size_t nbytes) {
  char temp[nbytes];
  // store a copy of data1 in temp
  memcpy(temp, pt1, nbytes);

  // copy data2 to location of data1
  memcpy(pt1, pt2, nbytes);

  // copy data in temp to location of data2
  memcpy(pt2, temp, nbytes);
}


void swap_twos(void *arr, size_t nelems, size_t elem_bytes, size_t index) {
  swap((char *) arr + (index * elem_bytes), (char *) arr + ((nelems - 1) * elem_bytes), elem_bytes);
}
int main() {
//  int x = 1;
//  int y = 2;
//  generic_swap(&x, &y, sizeof(x));
//  printf("%d %d", x, y);

  int nums[] = {5,4,3,2,1};
  size_t nelems = sizeof(nums) / sizeof(nums[0]);
  for (int i = 0; i <= nelems / 2; i++) {
    swap_twos(nums, nelems - i, sizeof(nums[0]), i);
  }
  print_int_array(nums, nelems);
  return 0;
}