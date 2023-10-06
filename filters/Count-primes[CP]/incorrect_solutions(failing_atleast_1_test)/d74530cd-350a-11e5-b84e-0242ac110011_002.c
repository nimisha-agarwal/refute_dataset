/*compile-errors:*/
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
        if(check_prime(i<2)==1&&check_prime(i)==1){
            a=1;
        }
        if(a==1){
            count=count+1;
        }
    }   
    printf("%d",count);
    return 0;
}