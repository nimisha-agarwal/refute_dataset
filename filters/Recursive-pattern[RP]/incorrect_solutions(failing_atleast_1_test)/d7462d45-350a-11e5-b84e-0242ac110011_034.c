/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void loop(int n,int a,int c)
{
    if(n==a&&c>0)
    {
        printf("%d",n);
        return;
    }
    if(n<=0)
    {
        printf("%d ",n);
        n=n+5;
        loop(n,a,c);
    }
    printf("%d ",n);
    n=n-5;
    c=c+1;
    loop(n,a,c);
}
int main(){
    int n,a,c=0;
    scanf("%d",&n);
    a=n;
    loop(n,a,c);
	return 0;
}