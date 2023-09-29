/*compile-errors:e175_305981.c:21:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int a=0;

int pattern(int n)
{
    int k,t=0;
    if (a==6)
    return 0;
    else if (n>0&&t==0)
    {
        n=n-5;
    }
    else if (n<=0||t==1)
    {
        n=n+5;
        t=1;
    }
    printf("%d ",n);
    a++;
    k=pattern(n);
}
int main()
{
    int n,k;
    scanf("%d",&n);
    k=pattern(n);
    
	return 0;
}