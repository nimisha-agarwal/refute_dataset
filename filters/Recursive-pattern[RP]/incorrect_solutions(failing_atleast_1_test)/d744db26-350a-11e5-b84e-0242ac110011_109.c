/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pattern(int n)
{
    int a=n;
    if(n>=0)
    {
       printf("%d ",n);
       a=pattern(n-5);
       printf("%d",n-5);
    }
    else 
    {
       
    }
}
int main()
{
    int b;
    scanf("%d",&b);
    int a=pattern(b);
    int c=pattern(a);
    return 0;
}