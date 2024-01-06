/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    *returnSize = 0;
    int *rArr =(int *)malloc(wordsSize * sizeof(int));
    for(int i = 0; i < wordsSize; i++){
        int j = 0;
        while(words[i][j] != x && j < strlen(words[i]) ){
            j++;
        }
        if(words[i][j] == x){
            rArr[*returnSize] = i;
            *returnSize = *returnSize + 1;
        }
    }
    return rArr;
}