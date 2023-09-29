/*compile-errors:e175_305981.c:19:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int a=0;

int pattern(int n)
{
    int k;
    if (a==6)
    return 0;
    else if (a<4)
    {
        n=n-5;
    }
    else if (a>3)
    {
        n=n+5;
    }
    printf("%d ",n);
    k=pattern(n);
}
int main()
{
    int n,k;
    scanf("%d",&n);
    k=pattern(n);
    
	return 0;
}