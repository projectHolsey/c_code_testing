#include <stdio.h>

/*
Problem was to find the only single value in an array
*/

int m_count(int *nums, int numsSize, int number_to_find) {

  int counter = 0;

  for (int i = 0; i < numsSize; i++) {

    if (nums[i] == number_to_find) {
      counter = counter + 1;
    }
  }

  return counter;
}

int singleNumber(int* nums, int numsSize) {

    int number = 0;

    for (int i = 0; i < numsSize; i++) {
      if (m_count(nums, numsSize, nums[i]) == 1)
      {
        number = nums[i];
        break;
      }
    }


    return number;
}


int fastImplementation(int* nums, int numsSize) {
    int sum=0;
    for(int i=0;i<numsSize;i++){
        // This will XOR the int.
        /*
        Essentially, if a number is xor'd twice, it'll be like
        it was never XOR'd.
        This way, the only number left standing is the 1 number
        that was only XOR'd once :) 
        */
        sum^=nums[i];
    }
    return sum;
}


int main() {

    int nums[] = {1, 2, 2};
    int x = singleNumber(nums, 3);

    int nums2[] = {1, 2, 2, 1, 4};
    int y = singleNumber(nums2, 5);



    printf("%d\n", x);

    printf("%d\n", y);

    return x;

}