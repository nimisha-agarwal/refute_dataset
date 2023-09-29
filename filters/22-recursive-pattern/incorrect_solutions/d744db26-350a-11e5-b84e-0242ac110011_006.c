/*compile-errors:e175_305971.c:2:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
pattern(int n,int c)
^~~~~~~
e175_305971.c:15:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
e175_305971.c:7:20: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
       printf("%d",a);
                   ^
e175_305971.c:4:10: note: initialize the variable 'a' to silence this warning
    int a;
         ^
          = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
pattern(int n,int c)
{
    int a;
    if(c!=3)
    {
       printf("%d",a);
       a=pattern(n-5,++c);
    }
    else
    {
       a=pattern(n+5,++c);
       printf("%d",a);
    }
}
int main()
{
    int b;
    scanf("%d",&b);
    pattern(b,0);
	return 0;
}