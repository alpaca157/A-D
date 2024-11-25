#include <stdio.h>
#include <stdlib.h>

int removeduplicados(int* nums, int numsSize){
  if(numsSize == 0) return 0;

  int k =1;
  for(int i = 1; i < numsSize; i++){
    if(nums[i] != nums[k - 1]){
        nums[k] =  nums[i];
        k++;
    }
  }
  return k;
}

int main(){
    int nums[] = {1, 1, 2, 3, 3, 4, 5, 5, 6};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int k = removeduplicados(nums, numsSize);

    printf("Numeros unicos: %d\n", k);
    printf("Array modificado: ");
    for(int i = 0; i < k; i++){

        printf("%d", nums[i]);
    }
    return 0;
}