/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void pattern(int n)
{
    int a=n;
    if(n>=0)
    {
       printf("%d ",a);
       a=pattern(n-5);
    }
    else
    {
        printf("%d ",a);
        a=pattern(n+5);
    }
}
int main()
{
    int b;
    scanf("%d",&b);
    pattern(b);
    return 0;
}