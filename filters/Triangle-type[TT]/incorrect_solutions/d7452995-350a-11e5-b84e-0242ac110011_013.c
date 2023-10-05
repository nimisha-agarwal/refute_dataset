/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,c,x;
   scanf("%d,%d,%d",&a,&b,&c);
    if(a>=b&&a>=c)
    {
        x=a;
    }
    if(b>=a&&b>=c)
    {
        x=b;
    }
    if(c>=a&&c>=b)
    {
        x=c;
    }
    if(2*x*x<a*a+b*b+c*c)
    {
        printf("Acute Triangle");
    }
    if(2*x*x==a*a+b*b+c*c)
    {
        printf("Right Triangle");
    }
    if(2*x*x>a*a+b*b+c*c)
    {
        printf("Obtuse Triangle");
    }
    if(2*x>a+b+c)
    {
        printf("Invalid Triangle");
    }
    return 0;
}