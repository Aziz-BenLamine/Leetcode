int maxArea(int* height, int heightSize) {
    int l = 0;
    int r = heightSize - 1;
    int mArea = 0, lArea = 0;
    while(r > l){
        lArea = 0;
        if(height[r]> height[l]){
            lArea = height[l] * (r - l);
            l++;
        }else{
            lArea = height[r] * (r - l);
            r--;
        }
        if(lArea > mArea){
            mArea = lArea;
        }
    }
    return mArea;
}