/*compile-errors:e175_306040.c:14:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pattern(int n)
{   
    if (n<=0)
    {printf("%d ",n);
    return n;}
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