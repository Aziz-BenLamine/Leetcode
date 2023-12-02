int maxSubArray(int* nums, int numsSize) {
    if(numsSize == 0){
        return 0;
    }else if(numsSize == 1){
        return nums[0];
    }
    
    int sum = nums[0], maxS = nums[0];
    for(int i = 1; i < numsSize; i++){
        if(sum + nums[i] < nums[i]){
            sum = nums[i];
        }else{
            sum += nums[i];
        }
        if(maxS < sum){
            maxS = sum;
        }
    }
    return maxS;
}