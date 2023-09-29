/*compile-errors:e175_306004.c:20:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>



int pattern(int n)
{
    if(n==0 || n<0)
    {
        return 0;
    }
    
    if(n>0)
    {
        printf("%d",n);
        pattern(n-5);
    }
    
    printf("%d",n);
    pattern(n+5);
}

int main()
{
    int n;
    scanf("%d",&n);
    pattern(n);
}