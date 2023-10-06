/*execute-result:AT*/
/*compile-errors:e158_278051.c:7:12: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
    if(num%i==0){
           ^
e158_278051.c:5:22: note: initialize the variable 'i' to silence this warning
    int p1,num,p2,N,i;
                     ^
                      = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int main(){
    int p1,num,p2,N,i;
    scanf("%d%d%d%d",&N,&num,&p1,&p2);
    if(num%i==0){
        return 0;
    }
    else{
        return 1;
    }
    if(num==2){
        printf("2 is prime");
    }
   else{
    for(i=2;i<=N;i=i+2){
    printf("%d",i);
    }
   }
     return 0;
}