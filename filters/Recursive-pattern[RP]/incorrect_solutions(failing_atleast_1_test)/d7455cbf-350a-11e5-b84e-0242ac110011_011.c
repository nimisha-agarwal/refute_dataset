/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int make_pattern();

int main()
{
	int n,flag=0,k;
	scanf("%d",&n);
	k=n;
	make_pattern(k,n,flag);
	return 0;
}
int make_pattern(int k,int n,int flag)
{

    if(n>0)
    {
        printf("%d",n);
        n-=5;
        make_pattern(k,n,flag);
    }
        if(n==k)
    return printf("%d",k);
    if(n<=0)
    {
        n+=5;
        printf("%d",n);
        make_pattern(k,n,flag);
    }
    return 0;
}