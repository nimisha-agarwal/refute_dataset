/*compile-errors:e175_305971.c:15:1: warning: control may reach end of non-void function [-Wreturn-type]
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
    }
    else 
    {
       return(n-5);
    }
}
int main()
{
    int b;
    scanf("%d",&b);
    int a=pattern(b);
    int c=pattern(a);
    printf("%d ",c);
    return 0;
}