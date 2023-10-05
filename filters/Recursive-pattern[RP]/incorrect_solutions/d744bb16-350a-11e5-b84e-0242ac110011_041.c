/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int ans1(int n)
{
    if(n<=0)
    {
        printf("%d ",n);
        return n;
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
    printf("%d    ",a);
    //ans2(a,n);
	return 0;
}