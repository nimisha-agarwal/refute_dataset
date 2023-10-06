/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void prints(int n)
{
    if(n<=0)
    {
        printf("%d",n);
        return;
    }
    else
    {
        printf("%d",n);
        prints(n-5);
        n = n+5;
        printf("%d",n);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    prints(n);
	return 0;
}