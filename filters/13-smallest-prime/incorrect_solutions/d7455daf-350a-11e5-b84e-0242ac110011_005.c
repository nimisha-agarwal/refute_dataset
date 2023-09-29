/*compile-errors:e158_278304.c:23:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",N);
           ~~  ^
e158_278304.c:23:16: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    scanf("%d",N);
               ^
e158_278304.c:22:10: note: initialize the variable 'N' to silence this warning
    int N,x;
         ^
          = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int check_prime(int num)
{
    int i=0,j;
    while(i!=1)
    {
        for(j=2;j<=num;j++)
        if(num%j==0)
        i=1;
        else
        num++;
    }
    return num;
}

//Complete function definitions

int main(){
    
    int N,x;
    scanf("%d",N);
    x=check_prime(N);
    
    return 0;
}