bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    int len1 = 0;
    for(int i =0; i < word1Size; i++){
        len1 += strlen(word1[i]);
    }
    
    int len2 = 0;
    for(int i = 0; i < word2Size; i++){
        len2 += strlen(word2[i]);
    }
    
    if (len1 != len2) {
        return false;
    }
    
    char str1[len1 + 1];
    char str2[len2 + 1];
    
    int index = 0;
    for(int i = 0; i < word1Size; i++){
        strcpy(str1+index,word1[i]);
        index += strlen(word1[i]);
    }
    
    index = 0;
    for (int i = 0; i < word2Size; i++) {
        strcpy(str2 + index, word2[i]);
        index += strlen(word2[i]);
    }
    
    return strcmp(str1,str2) == 0;
}