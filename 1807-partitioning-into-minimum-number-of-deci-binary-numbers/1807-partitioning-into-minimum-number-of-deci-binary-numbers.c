int minPartitions(char * n){
    int maxDigit = 0;
    for(int i = 0; i < strlen(n); i++){
        if(n[i] - '0' > maxDigit){
            maxDigit = n[i] -'0';
        }
    }
    return maxDigit;
}