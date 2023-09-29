/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void ptrn(int m)
{
    if(m<=0)
    {
        printf("%d",m);
    }
    ptrn (m-5);
}

int main()
{
	int n;
	scanf("%d",&n);
	ptrn(n);
	return 0;
}