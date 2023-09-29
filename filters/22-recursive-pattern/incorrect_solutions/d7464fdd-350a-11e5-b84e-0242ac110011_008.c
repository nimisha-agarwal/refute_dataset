/*execute-result:OK*/
/*compile-errors:e175_306040.c:5:9: warning: unused variable 'nf' [-Wunused-variable]
    int nf=n+5;
        ^
e175_306040.c:5:12: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    int nf=n+5;
           ^
e175_306040.c:4:10: note: initialize the variable 'n' to silence this warning
    int n;
         ^
          = 0
e175_306040.c:23:27: warning: variable 'nf' is uninitialized when used here [-Wuninitialized]
    printf("%d",pattern(n,nf));
                          ^~
e175_306040.c:21:13: note: initialize the variable 'nf' to silence this warning
    int n,nf;
            ^
             = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pattern(int intl,int fnl)
{   
    int n;
    int nf=n+5;
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