/*compile-errors:e175_306022.c:10:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
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
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d ",ptrn(n));
	return 0;
}