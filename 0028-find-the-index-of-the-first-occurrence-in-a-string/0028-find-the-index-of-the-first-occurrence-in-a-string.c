int strStr(char* haystack, char* needle) {
    int size1 = strlen(haystack);
    int size2 = strlen(needle);
    int i = 0, found = -1;
    
    while(i + size2 <= size1 && found == -1){
        if (haystack[i] == needle[0]){
            int j;
            for(j = 0; j < size2; j++){
                if(haystack[i+j] != needle[j]){
                    break;
                }
            }
            if (j == size2) {
                found = i;
            }
        }
        i++;
    }
    
    return found;
}