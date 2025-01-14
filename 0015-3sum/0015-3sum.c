int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
} 

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
    qsort(nums, numsSize, sizeof(int), compare);
    int maxTriplets = (numsSize < 1000) ? numsSize * (numsSize - 1) * (numsSize - 2) / 6 : 18000;
    int **result = malloc(maxTriplets * sizeof(int*));
    *returnColumnSizes = malloc(maxTriplets * sizeof(int));
    *returnSize = 0;
    for(int i = 0; i < numsSize -2; i++){
        if(i>0 && nums[i] == nums[i - 1]) continue;
        int l = i + 1;
        int r = numsSize - 1;
        while(l < r){
            int sum = nums[i] + nums[l] + nums[r];
            if (sum == 0){
                result[*returnSize] = malloc(3 * sizeof(int));
                result[*returnSize][0] = nums[i];
                result[*returnSize][1] = nums[l];
                result[*returnSize][2] = nums[r];
                (*returnColumnSizes)[*returnSize] = 3;
                (*returnSize)++;

                while(l < r && nums[l] == nums[l+1]) l++;
                while(l < r && nums[r] == nums[r-1]) r--;

                l++;
                r--;
            }
            else if(sum < 0){
                l++;
            }
            else{
                r--;
            }
        }
    }
    return result;
}