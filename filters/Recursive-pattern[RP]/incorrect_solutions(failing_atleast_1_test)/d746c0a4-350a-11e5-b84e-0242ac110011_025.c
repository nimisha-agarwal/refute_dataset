/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int count=0;
void permute(int n)
{
    if(count>1) return;
    if(n<=0)
    {
        printf("%d ",n);
        count++;
    }
    if(n>0)
    {
        printf("%d ",n);
        permute(n);
        n=n+5;
        printf("%d ",n);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    permute(n);
	return 0;
}