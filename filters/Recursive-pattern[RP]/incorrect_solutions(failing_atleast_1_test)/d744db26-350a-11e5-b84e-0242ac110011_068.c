/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pattern(int n)
{
    int a=n;
    if(n>=0)
    {
       printf("%d ",a);
       a=n-pattern(n-5);
       return(a);
    }
    else
    {
        printf("%d",a);
        a=n+pattern(n+5);
        return(a);
    }
}
int main()
{
    int b;
    scanf("%d",&b);
    pattern(b);
    int a=pattern(b);
    printf("%d ",a);
    
	return 0;
}