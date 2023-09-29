/*compile-errors:e158_278304.c:6:9: warning: unused variable 'i' [-Wunused-variable]
    int i=0,j;
        ^
e158_278304.c:14:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278304.c:21:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",N);
           ~~  ^
e158_278304.c:21:16: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    scanf("%d",N);
               ^
e158_278304.c:20:10: note: initialize the variable 'N' to silence this warning
    int N,x;
         ^
          = 0
4 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int check_prime(int num)
{
    int i=0,j;
    for(j=2;j<=(num/2);j++)
    {
    if((num%j)==0)
    return num;
    }
    num++;
    
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