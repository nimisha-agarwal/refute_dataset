/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
//Complete function definitions

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