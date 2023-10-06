/*compile-errors:e175_305971.c:2:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
pattern(int n)
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
pattern(int n)
{
    int a;
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
	return 0;
}