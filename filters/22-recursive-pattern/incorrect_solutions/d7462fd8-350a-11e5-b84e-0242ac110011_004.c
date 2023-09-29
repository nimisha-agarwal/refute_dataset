/*execute-result:TL*/
/*compile-errors:e175_306032.c:14:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int fn(int n)
{
    if(n<=0)
        {
            printf("%d ",n);
            fn(n+5);
        }
    if(n>0)
        {
            printf("%d ",n);
            fn(n-5);
        }
}




int main()
{
    
    int n;
    scanf("%d",&n);
    fn(n);
	return 0;
}