/*compile-errors:e175_305971.c:15:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pattern(int n)
{
    int c=n;
    if(n>=0)
    {
       printf("%d",c);
       c=n-pattern(n-5);
    }
    else
    {
       printf("%d",c);
       c=n+pattern(n+5);
    }
}
int main()
{
    int b;
    scanf("%d",&b);
    pattern(b);
	return 0;
}