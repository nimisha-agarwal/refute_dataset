/*compile-errors:e175_305971.c:2:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
pattern(int n,int c)
^~~~~~~
e175_305971.c:4:9: warning: unused variable 'a' [-Wunused-variable]
    int a;
        ^
e175_305971.c:13:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
pattern(int n,int c)
{
    int a;
    if(c!=3)
    {
       printf("%d",pattern(n-5,++c));
    }
    else
    {
       printf("%d",pattern(n+5,++c));
    }
}
int main()
{
    int b;
    scanf("%d",&b);
    pattern(b,1);
	return 0;
}