/*compile-errors:e175_306040.c:17:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pattern(int n)
{   
    if (n<=0)//for base case if value drps -ve or 0
    {
        printf("%d ",n);
        return n;
    }
    else
    {
        printf("%d ",n);//print its initial value
        pattern(n-5);
        /*function call for next value*/
        printf("%d ",n);//for repeatation of after -ve or 0 value 
    }
 
}
int main()
{
    int n;
    scanf("%d",&n);
    pattern(n);//function call in main
    return 0;
}