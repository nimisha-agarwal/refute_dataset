/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b+c||b>a+c||c>a+b)
    printf("Invalid Triangle");
    else if(c*c>a*a+b*b||b*b>a*a+c*c||a*a>b*b+c*c)
    printf("Obtuse Triangle");
    else if(c*c==a*a+b*b||b*b==a*a+c*c||a*a==b*b+c*c)
printf("Right Triangle");
else
printf("Acute Triangle");
return 0;
}