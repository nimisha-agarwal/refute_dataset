/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int a=0;

void pattern(int n)
{
    if (a==6)
    return;
    else if (a<4)
    {
        n=n-5;
    }
    else if (a>3)
    {
        n=n+5;
    }
    printf("%d ",n);
    pattern(n);
}
int main()
{
    int n,k;
    scanf("%d",&n);
    pattern(n);
    
	return 0;
}