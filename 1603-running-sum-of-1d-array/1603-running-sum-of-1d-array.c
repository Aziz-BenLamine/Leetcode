/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int *rArr = (int *)malloc(*returnSize *sizeof(int));
    int Sum = 0;
    for(int i = 0; i < numsSize; i++){
        Sum = Sum + nums[i];
        rArr[i] = Sum;
    }
    return rArr;
}