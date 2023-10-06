/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
pattern(int n,int c)
{
    int a;
    if(c!=3)
    {
       printf("%d",pattern(n-5,++c));
    }
    else
    {
       printf("%d",pattern(n+5,++c));
    }
}
int main()
{
    int b;
    scanf("%d",&b);
    pattern(b,1);
	return 0;
}