/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pattern(int n)
{   char c='\0';
    if (n<=0)
    {printf("%d ",n);
    }
    else
    {
    printf("%d ",n);
    pattern(n-5);
    printf("%d ",n);
    }
    return c; 
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",pattern(n));
    return 0;
}