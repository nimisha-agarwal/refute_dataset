/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void loop(int n)
{
    int a=n;
    if(n==a)
    {
        printf("%d",n);
        return;
    }
    if(n<=0)
    {
        printf("%d ",n);
        n=n+5;
    }
    printf("%d ",n);
    n=n-5;
    loop(n);
}
int main(){
    int n;
    scanf("%d",&n);
    loop(n);
	return 0;
}