/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n,t=0;

int pattern(int g)
{
    int k;
    if (g==n&&t==1)
    return 0;
    printf("%d ",g);

    if (g>0&&t==0)
    {
        g=g-5;
    }
    else if (g<=0||t==1)
    {
        g=g+5;
        t=1;
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