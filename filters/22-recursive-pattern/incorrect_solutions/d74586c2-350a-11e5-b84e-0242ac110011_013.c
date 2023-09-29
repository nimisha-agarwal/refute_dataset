/*execute-result:OK*/
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
    printf("%d",n);
	return 0;
}

void pattern(int n)
{
    if(n<=0)
        return;
    printf(" %d",n-5);
    pattern(n-5);
    n+=5;
    printf(" %d",n);
}