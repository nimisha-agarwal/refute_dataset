/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int N;
int pattern(int n,int m)
{
    if(n<=0)
    {
        return 0;
        
    }
    if(n<=0)
    {
        printf("%d ",n);
        pattern(n+5,n);
    }
    if(n>0&&n>m)
    {
        printf("%d ",n);
        if(n==N)
        return 0;
        pattern(n+5,n);
    }
    if(n>0&&n<=m)
    {
        printf("%d ",n);
        pattern(n-5,n);
    }
    return 0;
}
int main()
{
	int n;
	scanf("%d\n",&n);
	N=n;
	pattern(n,n);
	return 0;
}