/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void permute(int n)
{
    if(n<=0) return;
    printf("%d ",n);
    n=n-5;
    permute(n);
    
}
int main()
{
    int n;
    scanf("%d",&n);
    permute(n);
	return 0;
}