/*compile-errors:e158_278304.c:23:5: warning: control may reach end of non-void function [-Wreturn-type]
    }
    ^
e158_278304.c:34:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",N);
           ~~  ^
e158_278304.c:34:16: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    scanf("%d",N);
               ^
e158_278304.c:33:10: note: initialize the variable 'N' to silence this warning
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
    int i,j,tmp=0;
    for(i=num;i>=num;i++)
    {
    for(j=2;j<=num;j++)
    if(i%j==0)
    {
        tmp=1;
        break;
    }
    
    if(tmp==1)
    continue;
    }
    if(tmp==0)
    return tmp;

        
    }
    
    
    
    

//Complete function definitions

int main()
{
    int N,x;
    scanf("%d",N);
    x=check_prime(N);
    printf("%d",x);
    return 0;
}