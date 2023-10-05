/*compile-errors:e158_278030.c:18:10: warning: expression result unused [-Wunused-value]
        m<num;
        ~^~~~
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i;
    for(i=2;i<num;i++){
        if(num%i==0)
            return 0;
    }
    return 1;
}

int main(){
    int i,num,a=0,count=0; //Write your code here
    scanf("%d",&num);
    for(i=2;i<num;i++){
        int m;
        m=i+1;
        m<num;
        if(check_prime(i)==1&&check_prime(m)==1){
            a=1;
        }
        if(a==1){
            count=count+1;
        }
    }   
    printf("%d",count);
    return 0;
}