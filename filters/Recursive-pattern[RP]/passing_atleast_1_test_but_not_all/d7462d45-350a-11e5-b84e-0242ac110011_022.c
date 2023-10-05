/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void loop(int n,int a,int c,int d)
{
    if(n==a&&c==1)
    {
        printf("%d",n);
        return;
    }
    if(n<=0)
    {
        printf("%d ",n);
        n=n+5;
        d=1;
        loop(n,a,c,d);
    }
    if(d!=1)
    {
        printf("%d ",n);
        n=n-5;
        c=1;
        loop(n,a,c,d);
    }
}
int main(){
    int n,a,c=0,d=0;
    scanf("%d",&n);
    a=n;
    loop(n,a,c,d);
	return 0;
}