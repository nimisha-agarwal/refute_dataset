/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int make_pattern();

int main()
{
	int n,k;
	scanf("%d",&n);
	k=n;
	make_pattern(k,n,0);
	return 0;
}
int make_pattern(int k,int n,int flag)
{
    if(n>k)
    return 0;
    if(n>0&&flag==0)
    {
        printf("%d",n);
        n-=5;
        make_pattern(k,n);
    }

    else
    {
        flag++;
        printf("%d",n);
        n+=5;
        make_pattern(k,n);
    }
    return 0;
}