/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pattern(int intl,int fnl)
{   
    if (fnl>0)
    {
    pattern(intl-5,fnl);
    fnl=intl-5;
    }
    else
    {
    pattern(intl-5,fnl);
    fnl=intl+5;    
    }
    
    return fnl; 
}
int main()
{
    int n,nf;
    scanf("%d",&n);
    printf("%d",pattern(n,nf));
    
	return 0;
}