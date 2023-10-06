/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pattern(int n)
{
    int a=n;
    if(n>=0)
    {
       printf("%d ",n);
       n=pattern(n-5);
       printf("%d",n-5);
       return(n-5);
    }
    else 
    {
        while(a<=n)
        printf("%d ",n);
        n=pattern(n+5);
    }
}
int main()
{
    int b;
    scanf("%d",&b);
    int a=pattern(b);
    int c=pattern(a);
    
    return 0;
}