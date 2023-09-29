/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if((a+b>c)&&(b+c>a)&&(c+a>b))
{
    if((a*a+b*b>c*c)&&(b*b+c*c>a*a)&&(c*c+a*a>b*b))
    {printf("Acute");}
    if((a*a+b*b<c*c)||(b*b+c*c<a*a)||(c*c+a*a<b*b))
    {printf("Obtuse");}
}
    return 0;
}