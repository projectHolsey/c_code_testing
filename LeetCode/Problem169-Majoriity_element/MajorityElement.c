#include <stdio.h>

int majorityElement(int* nums, int numsSize) {
    /*

    Go through the array.
    If the current number is equal to the highest number +=1 j
    if J hits 0, then change highest number to nums[i]
    Whatever number is the highest number at the end wins

    */


    int j=0,u=0;
    for(int i=0;i<numsSize;i++){
        if(j==0)
            u=nums[i];
        if(u==nums[i])
            j++;
        else
            j--;
    }
        
    return u;
    }

int main() {

    int nums[] = {3,2,3};
    int x = majorityElement(nums, 3);

    int nums2[] = {2,2,1,1,1,2,2};
    int y = majorityElement(nums2, 7);

    printf("%d\n", x);
    printf("%d\n", y);


    return 0 ;
}