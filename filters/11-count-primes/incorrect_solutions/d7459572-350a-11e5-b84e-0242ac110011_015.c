/*compile-errors:e158_278051.c:7:16: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    for(i=1;i<=N;i=i+2){
               ^
e158_278051.c:5:16: note: initialize the variable 'N' to silence this warning
    int p1,p2,N,i;
               ^
                = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>
int check_prime(int num);
int main(){
    int p1,p2,N,i;
    scanf("%d%d",&p1,&p2);
    for(i=1;i<=N;i=i+2){
    printf("{%d%d}",p1,p2);
    }
    return 0;
}