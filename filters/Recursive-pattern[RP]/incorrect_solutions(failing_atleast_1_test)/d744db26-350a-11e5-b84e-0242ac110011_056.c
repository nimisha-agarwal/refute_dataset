/*compile-errors:e175_305971.c:14:1: warning: control may reach end of non-void function [-Wreturn-type]
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
       printf("%d",a);
       a=n-pattern(n-5);
    }
    else
    {
       return(a);
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