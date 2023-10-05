/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
pattern(int n)
{
    int a;
    if(n!=0||n<0)
    {
       printf("%d",pattern(n-5));
    }
    else
    {
       printf("%d",pattern(n+5));
    }
}
int main()
{
    int b;
    scanf("%d",&b);
    pattern(b);
	return 0;
}