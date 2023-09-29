/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pattern(int n)
{
    if (n<=0)
    {printf("%d ",n);
    }
    else
    {
    printf("%d ",n);
    pattern(n-5);
    printf("%d ",n);
    }
     
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",pattern(n));
    return 0;
}