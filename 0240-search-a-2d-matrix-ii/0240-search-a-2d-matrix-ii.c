bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int r = 0, c = *matrixColSize - 1;
    
    while(r < matrixSize && c >= 0){
       if(matrix[r][c] == target){
           return true;
       }else if(matrix[r][c] < target){
           r++;
       }else{
           c--;
       }
    }
    return false;
}