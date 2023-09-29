/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
int a,b,c;//a,b,c are sides of triangle
scanf("%d%d%d",&a,&b,&c);
if((a*a)+(b*b)==(c*c)||(a*a)+(c*c)==(b*b)||(c*c)+(b*b)==(a*a))
    printf (" Right Triangle");//right triangle satisfies pythagorus theorum
else if (a+b<c||b+c<a||a+c<b)
    printf("Invalid Triangle");//any triangle cannot have two side less than third side
else if (((a*a)+(b*b)<(c*c))||((a*a)+(c*c)<(b*b))||((a*a)>(b*b)+(c*c)))
    printf(" Obtuse Triangle");//obtuse triangle has one angle>90
else if(((a*a)+(b*b)>(c*c)||(b*b)+(c*c)>(a*a)||(a*a)+(c*c)>(b*b)))
    printf(" Acute Triangle");
    // Fill this area with your code.
    return 0;
}