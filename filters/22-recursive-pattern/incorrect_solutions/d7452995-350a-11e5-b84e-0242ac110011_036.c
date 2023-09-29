/*compile-errors:e175_305981.c:8:9: warning: variable 'k' is uninitialized when used here [-Wuninitialized]
    if (k==n&&t==1)
        ^
e175_305981.c:6:10: note: initialize the variable 'k' to silence this warning
    int k;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n,t=0;

int pattern(int g)
{
    int k;
    printf("%d ",g);
    if (k==n&&t==1)
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
    return g;
    k=pattern(g);
}
int main()
{
    int n,k;
    scanf("%d",&n);
    k=pattern(n);
    
	return 0;
}