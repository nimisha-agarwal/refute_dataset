/*execute-result:TL*/
/*compile-errors:sh: 1: exec: clang: not found*/
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
        printf("Hi\n");
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