/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
pattern(int n,int c)
{
    int a;
    if(c!=3)
    {
       printf("%d",a);
       a=n-pattern(n-5,++c);
    }
    else
    {
       a=n+pattern(n+5,++c);
       printf("%d",a);
    }
}
int main()
{
    int b;
    scanf("%d",&b);
    pattern(b,0);
	return 0;
}