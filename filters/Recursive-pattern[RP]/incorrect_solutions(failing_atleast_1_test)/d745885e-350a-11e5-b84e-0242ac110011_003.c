/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>



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
    pattern(n+5);
}

int main()
{
    int n;
    scanf("%d",&n);
    pattern(n);
}