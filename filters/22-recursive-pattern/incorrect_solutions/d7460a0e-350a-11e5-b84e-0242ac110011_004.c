/*compile-errors:sh: 1: exec: clang: not found*/
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
    return ptrn(m-5);
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d ",ptrn(n));
	return 0;
}