/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pattern(int intl,int fnl)
{   int nf=n+5;
    if (fnl>0)
    {fnl=+5;
    pattern(intl,fnl);}
    else
    {fnl=-5;
    pattern(intl,fnl);}
    
    return fnl; 
}
int main()
{
    int n,nf;
    scanf("%d",&n);
    printf("%d",pattern(n,nf));
    
	return 0;
}