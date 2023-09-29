/*compile-errors:e175_305967.c:16:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int ans1(int n)
{
    int v;
    v=n;
    if(n<=0)
    {
        printf("%d",n);
        return v;
    }
    else
    {
        printf("%d ",n);
        n=n-5;
    }
}
int main()
{
    int n,a;
    scanf("%d",&n);
    a=ans1(n);
    printf("%d  ",a);
    //ans2(n,v);
	return 0;
}