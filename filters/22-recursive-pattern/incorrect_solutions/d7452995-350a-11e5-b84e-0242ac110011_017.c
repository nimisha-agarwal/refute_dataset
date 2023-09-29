/*compile-errors:e175_305981.c:20:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;

int pattern(int g)
{
    int k,t=0;
    if (g==n&&t==1)
    return 0;
    else if (g>0&&t==0)
    {
        g=g-5;
    }
    else if (g<=0||t==1)
    {
        g=g+5;
        t=1;
    }
    printf("%d ",g);
    k=pattern(g);
}
int main()
{
    int n,k;
    scanf("%d",&n);
    k=pattern(n);
    
	return 0;
}