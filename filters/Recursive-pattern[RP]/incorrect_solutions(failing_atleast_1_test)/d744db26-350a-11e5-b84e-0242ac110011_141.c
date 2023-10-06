/*compile-errors:e175_305971.c:2:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
pattern(int n)
^~~~~~~
e175_305971.c:15:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
pattern(int n)
{
    int a=n;
    if(n>=0)
    {
       printf("%d",a);
       a=n-pattern(n-5);
    }
    else
    {
       printf("%d",a);
       a=n+pattern(n+5);
    }
}
int main()
{
    int b;
    scanf("%d",&b);
    pattern(b);
    int a=pattern(b);
    printf("%d",a);
	return 0;
}