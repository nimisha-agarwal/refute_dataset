/*execute-result:OK*/
/*compile-errors:e158_278323.c:3:21: warning: unused parameter 'num' [-Wunused-parameter]
int check_prime(int num){
                    ^
e158_278323.c:6:17: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    for (i=2; i<N; i++)
                ^
e158_278323.c:4:6: note: initialize the variable 'N' to silence this warning
int N;
     ^
      = 0
e158_278323.c:13:15: warning: format specifies type 'float *' but the argument has type 'int *' [-Wformat]
   scanf("%f",&N);
          ~~  ^~
          %d
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
int N;
int i;
    for (i=2; i<N; i++)
         { if(N%i==0)
          return 0;}
    return 1;
}
int main(){
int N;
   scanf("%f",&N);
   while(!check_prime(N)){
      N++;
         }
    printf("%d",N);
    return 0;
}