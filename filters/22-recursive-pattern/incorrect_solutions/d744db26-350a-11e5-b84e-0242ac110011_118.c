/*compile-errors:e175_305971.c:11:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e175_305971.c:17:9: warning: unused variable 'a' [-Wunused-variable]
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
       a=n-pattern(n-5);
       return(a);
    }
}
int main()
{
    int b;
    scanf("%d",&b);
    pattern(b);
    int a=pattern(b);
    return 0;
}