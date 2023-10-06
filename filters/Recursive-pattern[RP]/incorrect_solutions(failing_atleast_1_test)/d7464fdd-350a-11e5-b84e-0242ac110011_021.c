/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pattern(int intl,int fnl)
{   
    if (intl>0)
    {
    pattern(intl,fnl);
    fnl=intl-5;
    }
    else
    {
    pattern(intl,fnl);
    fnl=intl+5;    
    }
    
    return fnl; 
}
int main()
{
    int n,nf;
    scanf("%d",&n);
    printf("%d",n);
    printf("%d",pattern(n,nf));
    
	return 0;
}