#include <stdio.h>

void twoSum(int* nums, int numsSize, int target){
  int result[2] = {-1, -1};

  for (int i = 0; i < numsSize; i++){
    for (int j = i + 1; j < numsSize; j++){
      if (nums[i] + nums[j] == target){
	result[0] = i;
	result[1] = j;
      }
    }
  }
  
  printf("first index: %d\n", result[0]);
  printf("second index: %d\n", result[1]);
}

int main(){
  int x[] = {1,2,3,4,5};
  twoSum(x, 5, 6);
  return 0;
}
