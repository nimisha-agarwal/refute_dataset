/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (b*b+c*c>a*a && a*a+b*b>c*c && a*a+c*c>b*b){printf("Acute Triangle");}
    else if (b*b+c*c==a*a || c*c+a*a==b*b || a*a+b*b==c*c)
    {printf("Right Triangle");}
    else if ((b*b+c*c<a*a || a*a+b*b<c*c || c*c+a*a<b*b)&&(b+c>a && a+b>c && c+a>b))
    {printf("Obtuse Triangle");}
    if (b+c<a || c+a<b || a+b<c)
    {printf("Invalid Triangle");}
    return 0;
}