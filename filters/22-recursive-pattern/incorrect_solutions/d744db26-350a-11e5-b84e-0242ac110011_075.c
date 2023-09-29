/*compile-errors:e175_305971.c:17:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pattern(int n)
{
    int a=n;
    if(n>=0)
    {
       printf("%d ",n);
       a=pattern(n-5);
       printf("%d",n-5);
       return(n-5);
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
    int a=pattern(b);
    pattern(a);
    return 0;
}