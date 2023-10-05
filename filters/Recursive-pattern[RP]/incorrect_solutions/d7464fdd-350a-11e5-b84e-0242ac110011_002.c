/*compile-errors:e175_306040.c:22:27: warning: variable 'nf' is uninitialized when used here [-Wuninitialized]
    printf("%d",pattern(n,nf));
                          ^~
e175_306040.c:19:13: note: initialize the variable 'nf' to silence this warning
    int n,nf;
            ^
             = 0
1 warning generated.*/
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
    printf("%d",n);
    
	return 0;
}