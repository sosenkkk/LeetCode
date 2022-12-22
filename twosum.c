#include<stdio.h>
#include<stdlib.h>
/**
* Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    returnSize=(int *)malloc(sizeof(int)*2);
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i+1; j < numsSize; j++)
        {
            if(nums[j]+nums[i]==target){
                returnSize[0]=i;
                returnSize[1]=j;
                printf("[%d , %d]", returnSize[0], returnSize[1]);
            }
        }
        
    }
    return returnSize;
}
int main(){
    int size;
    scanf("%d", &size);
    int num[size];
    for (int i = 0; i < size; i++)
    {
        /* code */
        scanf("%d", &num[i]);
    }

    int target;
    int *output;
    scanf("%d", &target);
    int * utput = twoSum(num, size, target, output );
    printf("%d%d", utput[1], utput[0]);
    
}