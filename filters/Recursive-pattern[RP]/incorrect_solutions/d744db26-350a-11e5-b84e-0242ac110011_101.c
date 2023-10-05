/*execute-result:ML*/
/*compile-errors:e175_305971.c:4:9: warning: unused variable 'a' [-Wunused-variable]
    int a=n;
        ^
e175_305971.c:17:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
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
        printf("%d ",n);
        n=pattern(n+5);
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