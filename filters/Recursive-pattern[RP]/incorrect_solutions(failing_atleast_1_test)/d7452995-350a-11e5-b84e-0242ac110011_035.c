/*compile-errors:e175_305981.c:23:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n,t=0;

int pattern(int g)
{
    int k;
    printf("%d ",g);
    if (g==n&&t==1)
    return 0;
    
    else if (g>0&&t==0)
    {
        g=g-5;
        return 0;
    }
    else if (g<=0||t==1)
    {
        g=g+5;
        t=1;
        return 0;
    }
    k=pattern(g);
}
int main()
{
    int n,k;
    scanf("%d",&n);
    k=pattern(n);
    
	return 0;
}