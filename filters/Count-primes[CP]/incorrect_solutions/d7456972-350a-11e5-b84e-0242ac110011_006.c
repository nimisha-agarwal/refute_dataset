/*compile-errors:e158_278039.c:10:14: warning: variable 'k' is uninitialized when used here [-Wuninitialized]
        if(i%k){
             ^
e158_278039.c:6:14: note: initialize the variable 'k' to silence this warning
    int i,n,k,num;
             ^
              = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int i);
int check_prime(int r);

int main(){
    int i,n,k,num;
    scanf("%d",&n);
    num=0;
    for(i=0;i<=n;i=i+2){
        if(i%k){
       num=num+1;}
       else{}
    }
    printf("%d",num);
    return 0;
}