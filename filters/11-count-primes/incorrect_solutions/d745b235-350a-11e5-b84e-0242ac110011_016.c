/*compile-errors:e158_278061.c:3:21: warning: unused parameter 'num' [-Wunused-parameter]
int check_prime(int num){
                    ^
e158_278061.c:5:15: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
  for (i=2;i<=N-1;i=i+1){
              ^
e158_278061.c:4:8: note: initialize the variable 'N' to silence this warning
int i,N;
       ^
        = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
int i,N;
  for (i=2;i<=N-1;i=i+1){
    if (N%i==0)
    return 0;
    }    return 1;
}
int main(){
int N,a;
int i,j;
scanf("%d",&N);
for (i=1; i<=N; i++){
for (j=1; j<=N; j++)
    a=j/i;
    printf("%d",a);
}

    //Write your code here
    
    return 0;
}