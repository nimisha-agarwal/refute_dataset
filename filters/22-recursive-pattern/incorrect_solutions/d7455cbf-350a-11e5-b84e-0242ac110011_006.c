/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int make_pattern();

int main()
{
	int n,k;
	scanf("%d",&n);
	k=n;
	make_pattern(k,n);
	return 0;
}
int make_pattern(int k,int n)
{
    if(n>k)
    return 0;
    if(n>0)
    {
        printf("%d",n);
        n-=5;
        make_pattern(k,n);
    }

    if(n<=0)
    {
        n+=5;
        printf("%d",n);
        make_pattern(k,n);
    }
    return 0;
}