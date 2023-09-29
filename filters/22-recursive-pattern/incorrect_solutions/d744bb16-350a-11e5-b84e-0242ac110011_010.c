/*execute-result:TL*/
/*compile-errors:e175_305967.c:31:11: warning: unused variable 'a' [-Wunused-variable]
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
        printf("%d ",n);
        x=n;
    }
    else
    {
        printf("%d ",n);
        n=n-5;
        ans1(n);
    }
}
void ans2(int v)
{
    if(x>v)
       printf("  "); 
    else
    {
        x=x+5;
        printf("%d ",x);
        
        ans2(x);
    }
}
int main()
{
    int n,a;
    scanf("%d",&n);
    ans1(n);
    ans2(n);
	return 0;
}