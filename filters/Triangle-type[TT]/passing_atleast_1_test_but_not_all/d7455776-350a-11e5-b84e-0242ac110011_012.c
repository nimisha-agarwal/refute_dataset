/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c; // a,b,c represent three sides of a triangle
    scanf ("%d",&a);
    scanf ("%d",&b);
    scanf ("%d",&c);
    if (a+b<c)
    printf ("Invalid Triangle");
    else if (((a*a+b*b)>c*c)&& ((a+b)>c))
    printf ("acute triangle");
    else if (((a*a+b*b)<c*c)&& ((a+b)>c))
    printf ("obtuse triangle");
    else if (((a*a+b*b)==c*c)&& ((a+b)>c))
    printf ("right triangle");
    return 0;
}