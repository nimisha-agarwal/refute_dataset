/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int main()
{
   int a,b,c,x;
   scanf("%d,%d,%d",&a,&b,&c);
    if(a>=b&&a>=c)
    {
        x=a;
    }
    else
    {}
    if(b>=a&&b>=c)
    {
        x=b;
    }
    else{}
    if(c>=a&&c>=b)
    {
        x=c;
    }
    else{}
    if((2*x*x)<(a*a+b*b+c*c))
    {
        printf("Acute Triangle");
    }
    else{}
    if((2*x*x)==(a*a+b*b+c*c))
    {
        printf("Right Triangle");
    }
    else{}
    if((2*x*x)>(a*a+b*b+c*c))
    {
        printf("Obtuse Triangle");
    }
    else{}
    if(2*x>=a+b+c)
    {
        printf("Invalid Triangle");
    }
    else{}
    return 0;
}