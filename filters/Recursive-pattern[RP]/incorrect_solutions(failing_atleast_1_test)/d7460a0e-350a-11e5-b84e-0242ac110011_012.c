/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int ptrn(int m)
{
    if(m<=0)
    {
        return m;
    }
    printf("%d ",ptrn(m-5));
    return (m-5);
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d ",ptrn(n));
	return 0;
}