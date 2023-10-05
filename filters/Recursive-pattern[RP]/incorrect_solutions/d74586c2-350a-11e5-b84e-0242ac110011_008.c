/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void pattern(int n);

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",n);
    pattern(n);
	return 0;
}

void pattern(int n)
{
    n-=5
    printf(" %d",n);
    if(n<=0);
    {
        return;
    }
    pattern(n);
    n+=5;
    printf(" %d",n);
}