/*execute-result:OK*/
/*compile-errors:e175_306044.c:12:9: warning: unused variable 'k' [-Wunused-variable]
    int k;
        ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pattern(n)
{
    if(n<=0)
    return n;
    else
    return pattern(n-5);
}
int n;
int main()
{
    int k;
    
    scanf("%d",&n);
    printf("%d",pattern(n));
	return 0;
}