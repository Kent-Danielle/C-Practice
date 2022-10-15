#include <stdio.h>

void twoSum(int* nums, int numsSize, int target){
  int i,j = 0, sum = 0;
  int result[2] = {-1, -1};
  
  for(i = 0; i < numsSize; i++){
    for(j = i + 1; j < numsSize; j++){
      sum = nums[i] + nums[j];

      if(sum == target){
	result[0] = i;
	result[1] = j;
	goto done;
      }
    }
    printf("test\n");
  }
 done:
  printf("first index: %d\n", result[0]);
  printf("second index: %d\n", result[1]);
}

int main(){
  int x[] = {1,2,3,4,5,6,7,8,9,10};
  //  int x[] = {0,0,0,0,4};
  int target = 5;

  twoSum(x, sizeof(x)/sizeof(int), target);

  return 0;
}

