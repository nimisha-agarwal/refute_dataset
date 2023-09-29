/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void pattern(int n);

int main()
{
    int n;
    scanf("%d",&n);
    pattern(n);
	return 0;
}

void pattern(int n)
{
    printf(" %d",n);
    n-=5;
    if(n<=0)
    {
        printf("%d",n);
        return;
    }
    pattern(n);
    n+=5;
    printf(" %d",n);
}