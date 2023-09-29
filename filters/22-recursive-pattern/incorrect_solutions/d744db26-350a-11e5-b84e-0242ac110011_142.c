/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
pattern(int n)
{
    int c=0,a;
    if(c!=3)
    a=n-pattern(n-5);
    printf("%d",a);
}
int main()
{
    int b;
    scanf("%d",&b);
    pattern(b);
	return 0;
}