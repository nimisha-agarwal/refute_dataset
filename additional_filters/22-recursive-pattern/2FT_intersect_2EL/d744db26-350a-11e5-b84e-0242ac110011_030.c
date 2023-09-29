/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pattern(int n)
{
    int a=n;
    if(n>=0)
    {
       printf("%d ",a);
       a=pattern(n-5);
       printf("%d ",n);
    }
    else
    printf("%d ",a);
}
int main()
{
    int b;
    scanf("%d",&b);
    int a=pattern(b);
    return 0;
}