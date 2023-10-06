/*compile-errors:e158_278304.c:19:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278304.c:26:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",N);
           ~~  ^
e158_278304.c:26:16: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    scanf("%d",N);
               ^
e158_278304.c:25:10: note: initialize the variable 'N' to silence this warning
    int N,x;
         ^
          = 0
3 warnings generated.*/
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
        {
        i=1;
        return num;
        }
        else
        num++;
    }
    
}

//Complete function definitions

int main(){
    
    int N,x;
    scanf("%d",N);
    x=check_prime(N);
    
    return 0;
}