/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int n;

int funcadd(int a)
{
    if(a==n)
    {
        printf("%d",a);
        return 0;
    }    
    printf("%d" ,a);
    a=a+5;
    return funcadd(a);
}

int funcmin(int a)
{
    if(a<=0)
    {
        printf("%d ",a);
        return funcadd(a);
    }    
    printf("%d ",a);
    a=a-5;
    return funcmin(a);
}

int main()
{
    scanf("%d",&n);
    funcmin(n);
    return 0;
    
}