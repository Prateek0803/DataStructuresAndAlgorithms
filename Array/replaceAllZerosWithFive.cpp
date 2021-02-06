int convertFive(int n) {
    int num=0,count=1,res,rem;
    
    while(n){
        res = n/10;
        rem = n%10;
        if(rem == 0){
            num = num+count*5;
        }
        else{
            num = num+count*rem;
        }
        n=n/10;
        count = count*10;
    }
    return num;
}