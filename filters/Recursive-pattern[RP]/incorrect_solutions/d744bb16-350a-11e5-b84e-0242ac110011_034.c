/*execute-result:OK*/
/*compile-errors:e175_305967.c:32:11: warning: unused variable 'a' [-Wunused-variable]
    int n,a;
          ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int x; 
void ans1(int n)
{
    if(n<=0)
    {
        printf("%d  dd ",n);
        x=n;
        //return x;
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
    ans1(n);
    //printf("   %d    ",a);
    //ans2(a,n);
	return 0;
}