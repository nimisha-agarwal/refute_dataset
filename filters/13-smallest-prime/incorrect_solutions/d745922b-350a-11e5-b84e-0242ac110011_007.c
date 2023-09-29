/*compile-errors:e158_278316.c:13:15: warning: variable 'p' is uninitialized when used here [-Wuninitialized]
  printf("%d",p);
              ^
e158_278316.c:9:8: note: initialize the variable 'p' to silence this warning
  int p;
       ^
        = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

//Complete function definitions

int main(){
  int N;
  int p;
  
 
  scanf("%d",&N);
  printf("%d",p);
  
    //Write your code here
    
    return 0;
}