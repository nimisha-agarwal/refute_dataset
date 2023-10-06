/*compile-errors:e158_278345.c:15:8: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
    if(i<=N){
       ^
e158_278345.c:14:10: note: initialize the variable 'i' to silence this warning
    int i,j,count=0;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int N);
int main(){
    
  int N,h;
  scanf("%d",&N);
  h=check_prime(N);
  printf("%d",h);
    return 0;
}
int check_prime(int N)
{
    int i,j,count=0;
    if(i<=N){
    for(i=1;i++;){
        for(j=1;j<=i-1;j++){
            count=count+1;
        }
        if(count==i-1)
        printf("%d",i);
    }
    }
    return i;
}