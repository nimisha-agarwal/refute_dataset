/*compile-errors:e175_305981.c:24:11: warning: unused variable 'k' [-Wunused-variable]
    int n,k;
          ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n,t=0;

void pattern(int g)
{
    
    printf("%d ",g);
    if (g==n&&t==1)
    return;
    
    else if (g>0&&t==0)
    {
        g=g-5;
    }
    else if (g<=0||t==1)
    {
        g=g+5;
        t=1;
    }
    pattern(g);
}
int main()
{
    int n,k;
    scanf("%d",&n);
    pattern(n);
    
	return 0;
}