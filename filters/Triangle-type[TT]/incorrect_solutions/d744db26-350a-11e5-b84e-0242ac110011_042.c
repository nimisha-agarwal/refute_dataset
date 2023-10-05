/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c,l;
    scanf("%d%d%d",&a,&b,&c);
    {
    if(a>b&&a>c)
    l=a;
    else
    if(b>a&&b>c)
    l=b;
    else
    l=c;
    }
    
    return 0;
}