/*execute-result:OK*/
/*compile-errors:e175_305967.c:17:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int ans1(int n)
{
    int a;
    if(n<=0)
    {
        printf("%d ",n);
        a=n;
        return a;
    }
    else
    {
        printf("%d ",n);
        n=n-5;
        ans1(n);
    }
}
void ans2(int n,int v)
{
    if(n>v)
       printf("  "); 
    else
    {
        n=n+5;
        printf("%d ",n);
        
        ans2(n,v);
    }
}
int main()
{
    int n,a;
    scanf("%d",&n);
    a=ans1(n);
    printf("   %d    ",a);
    //ans2(a,n);
	return 0;
}