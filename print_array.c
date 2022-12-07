#include <stdio.h>

#include "print_array.h"

void print_int_array(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}