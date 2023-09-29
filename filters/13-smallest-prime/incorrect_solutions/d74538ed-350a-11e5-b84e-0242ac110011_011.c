/*compile-errors:e158_278293.c:9:11: warning: variable 'num' is uninitialized when used here [-Wuninitialized]
    for(p=num;p>=num;p=p+1)
          ^~~
e158_278293.c:8:12: note: initialize the variable 'num' to silence this warning
    int num,p,j;
           ^
            = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

//Complete function definitions

int main(){
    int num,p,j;
    for(p=num;p>=num;p=p+1)
    {
      for(j=2;j<=p;j=j+1)
      {
    if(p%j!=0)
    printf("%d",p);
      }
    }  
    return 0;
}