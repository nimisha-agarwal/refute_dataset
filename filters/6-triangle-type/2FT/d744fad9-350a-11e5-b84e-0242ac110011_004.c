/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
int a,b,c;
scanf("%d", &a);
scanf("%d",&b);
scanf("%d",&c);
if(a+b>c && b+c>a && c+a>b)
{
if( 
    ((a*a) + (b*b)== (c*c)) ||((b*b) + (c*c) == (a*a)) || ( (a*a) + (c*c)== (b*b))
    )

{printf("Right Triangle");}
else if( 
    ((a*a) +(b*b)<( c*c)) ||(( b*b )+ (c*c) <( a*a)) || ((a*a) + (c*c)<(b*b))
    )
{printf("Obtuse triangle");}
else 
{printf("Acute Triangle");}
}
else
{printf("Invalid Triangle");}
    return 0;
}