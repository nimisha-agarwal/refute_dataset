/*execute-result:OK*/
/*compile-errors:e156_271814.c:18:5: warning: add explicit braces to avoid dangling else [-Wdangling-else]
    else if ((((a*a)+(b*b))<c*c)&& ((a+b)>c))
    ^
e156_271814.c:27:5: warning: add explicit braces to avoid dangling else [-Wdangling-else]
    else if ((((c*c)+(b*b))<a*a)&& ((a+b)>c))
    ^
e156_271814.c:36:5: warning: add explicit braces to avoid dangling else [-Wdangling-else]
    else if ((((a*a)+(c*c))<b*b)&& ((a+b)>c))
    ^
3 warnings generated.*/
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
    
    else
    if (c>=a && c>=b)
    if ((((a*a)+(b*b))>c*c)&& ((a+b)>c))
    printf ("acute triangle");
    else if ((((a*a)+(b*b))<c*c)&& ((a+b)>c))
    printf ("obtuse triangle");
    else if ((((a*a)+(b*b))==c*c)&& ((a+b)>c))
    printf ("right triangle");
    
    if (a>=b && a>=c)
    
    if ((((c*c)+(b*b))>a*a)&& ((a+b)>c))
    printf ("acute triangle");
    else if ((((c*c)+(b*b))<a*a)&& ((a+b)>c))
    printf ("obtuse triangle");
    else if ((((c*c)+(b*b))==a*a)&& ((a+b)>c))
    printf ("right triangle");
    
    if (b>=a && b>=c)
    
    if ((((a*a)+(c*c))>b*b)&& ((a+b)>c))
    printf ("acute triangle");
    else if ((((a*a)+(c*c))<b*b)&& ((a+b)>c))
    printf ("obtuse triangle");
    else if ((((a*a)+(c*c))==b*b)&& ((a+b)>c))
    printf ("right triangle");
    
    return 0;
}