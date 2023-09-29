/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pattern(int n)
{
    int c=n;
    if(n>=0)
    {
       printf("%d",c);
       return(n-pattern(n-5));
    }
    else
    {
       printf("%d",c);
       return(n+pattern(n+5));
    }
}
int main()
{
    int b;
    scanf("%d",&b);
    int a=pattern(b);
    printf("%d",a);
	return 0;
}