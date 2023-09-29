/*execute-result:ML*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int m;

void pattern(int n)
{
    if(n==0 || n<0)
    {
        return;
    }
    
    if(n>0)
    {
        printf("%d",n);
        pattern(n-5);
    }
    
    printf("%d",n);
    
    if(n+5 ==m)
    {
        return;
    }
    pattern(n+5);
}

int main()
{
    scanf("%d",&m);
    pattern(m);
}