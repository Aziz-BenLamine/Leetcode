typedef struct {
    int** data;
    int rows;
    int cols;
} SubrectangleQueries;


SubrectangleQueries* subrectangleQueriesCreate(int** rectangle, int rectangleSize, int* rectangleColSize) {
    SubrectangleQueries* obj = malloc(sizeof(SubrectangleQueries));
    obj->rows = rectangleSize;
    obj->cols = rectangleColSize[0];
    obj->data = rectangle;
    return obj;
}

void subrectangleQueriesUpdateSubrectangle(SubrectangleQueries* obj, int row1, int col1, int row2, int col2, int newValue) {
    for(int i = row1; i <=row2; i++){
        for(int j = col1; j <=col2; j++){
            obj->data[i][j] = newValue;
        }
    }
}

int subrectangleQueriesGetValue(SubrectangleQueries* obj, int row, int col) {
    return obj->data[row][col];
}

void subrectangleQueriesFree(SubrectangleQueries* obj) {
    free(obj);
}