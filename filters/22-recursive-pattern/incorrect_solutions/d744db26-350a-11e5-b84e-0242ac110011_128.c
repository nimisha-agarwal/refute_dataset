/*compile-errors:*/
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
        return(a);
    }
}
int main()
{
    int b;
    scanf("%d",&b);
    int a=pattern(b);
    pattern(a);
    
    return 0;
}