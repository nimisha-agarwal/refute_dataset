/*execute-result:ML*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void loop(int n)
{
    int a=n,c=0;
    if(n==a&&c>0)
    {
        printf("%d",n);
        return;
    }
    if(n<=0)
    {
        printf("%d ",n);
        n=n+5;
        loop(n);
    }
    printf("%d ",n);
    n=n-5;
    c++;
    loop(n);
}
int main(){
    int n;
    scanf("%d",&n);
    loop(n);
	return 0;
}