/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int l = 0, r = numbersSize - 1;
    *returnSize = 2;
    int *rArr = (int *)malloc(*returnSize * sizeof(int)); 
    while(l < r){
        if(numbers[l]+numbers[r] == target){
            rArr[0] = l+1;
            rArr[1] = r+1;
            return rArr;
        }else if(numbers[l]+numbers[r] > target){
            r--;
        }else{
            l++;
        }
    }
    return rArr;
}