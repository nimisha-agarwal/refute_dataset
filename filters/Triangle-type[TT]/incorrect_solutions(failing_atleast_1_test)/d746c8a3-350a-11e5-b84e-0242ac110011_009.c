/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max;
    if((a>b)&&(a>c))
        max=a;
    if((c>b)&&(c>a))
        max=c;
    else max=b;
    
    return 0;
}