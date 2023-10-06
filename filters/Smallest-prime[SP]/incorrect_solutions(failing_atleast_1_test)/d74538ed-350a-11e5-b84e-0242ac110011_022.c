/*compile-errors:e158_278293.c:9:17: warning: variable 'num' is uninitialized when used here [-Wuninitialized]
      for(j=2;j<num;j=j+1)
                ^~~
e158_278293.c:8:12: note: initialize the variable 'num' to silence this warning
    int num,j;
           ^
            = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

//Complete function definitions

int main(){
    int num,j;
      for(j=2;j<num;j=j+1)
      {
    if(num%j==0)
     return(0);
      }
      return num;
      while(!check_prime(num))
      num=num+1;
      printf("%d",num);
    return 0;
    }