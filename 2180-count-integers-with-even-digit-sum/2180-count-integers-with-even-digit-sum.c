int digitSum(int num){
    int sum = 0;
    while(num != 0){
        sum += num%10;
        num /= 10;
    }
    return sum;
}

int countEven(int num) {
    if(num < 2) return 0;
    int s = 0;
    for(int i = 2; i <= num; i++){
        if(digitSum(i) % 2 == 0){
            s++;
        }
    }
    return s;
}