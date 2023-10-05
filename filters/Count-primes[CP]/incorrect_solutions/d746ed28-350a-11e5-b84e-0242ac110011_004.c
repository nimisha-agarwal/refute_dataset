/*compile-errors:e158_278110.c:2:21: warning: unused parameter 'num' [-Wunused-parameter]
int check_prime(int num){
                    ^
e158_278110.c:5:16: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    for(i=2;i<(n/2);i++){
               ^
e158_278110.c:3:16: note: initialize the variable 'n' to silence this warning
    int i,c,d,n;
               ^
                = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int num){
    int i,c,d,n;
    d=0;
    for(i=2;i<(n/2);i++){
    c=n%i;
    if (c==0){
        d=d+1;
    }
    }
    return d;
}
int main(){/*
    int N,p1,a,b,c=0;
    scanf("%d",&N);
    for(p1=2;p1<(N/2);p1++){
        a=check_prime(p1);
        b=check_prime((p1)+2);
        if ((a==0) && (b==0)){
            c=c+1;
        }
        }
    printf("%d",c); */
    int N,a;
    scanf("%d",&N);
    a=check_prime(N);
    printf("%d",a);
    return 0;
}