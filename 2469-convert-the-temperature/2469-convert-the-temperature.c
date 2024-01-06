/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    *returnSize = 2;
    double *rArr = (double *)malloc(*returnSize * sizeof(double));
    rArr[0] = (double) (celsius + 273.15);
    rArr[1] = (double) (celsius*1.80 + 32.00);
    
    return rArr;
}