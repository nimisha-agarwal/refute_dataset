/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b<c||a+c<b||b+c<a)
    printf("Invalid Triangle");
    if(b*b==a*a+c*c)
    printf("Right Triangle");
    if(b*b>a*a+c*c)
    printf("Obtuse Triangle");
    else
    printf("Acute Triangle");
    return 0;
}