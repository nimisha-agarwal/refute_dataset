/*compile-errors:e158_278304.c:24:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",N);
           ~~  ^
1 warning generated.*/
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
        {
        if((num%j)==0)
        i=1;
        }
        num++;
    }
    return num;
}

//Complete function definitions

int main()
{
    int N=0,x;
    scanf("%d",N);
    x=check_prime(N);
    printf("%d",x);
    return 0;
}