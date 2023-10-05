/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void ans(int n)
{
    int v;
    v=n;
    static int i=0;
    if(n==v && i!=0)
    
        printf("%d",n);
    else if(n>=0)
    {
        printf("%d ",n);
        i++;
        n=n-5;
        ans(n);
    }
    else
    {
        printf("%d ",n);
        i++;
        n=n+5;
        ans(n);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    ans(n);
	return 0;
}