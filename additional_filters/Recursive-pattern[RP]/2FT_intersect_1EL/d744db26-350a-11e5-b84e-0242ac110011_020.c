/*execute-result:OK*/
/*compile-errors:e175_305971.c:13:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
e175_305971.c:18:9: warning: unused variable 'a' [-Wunused-variable]
    int a=pattern(b);
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