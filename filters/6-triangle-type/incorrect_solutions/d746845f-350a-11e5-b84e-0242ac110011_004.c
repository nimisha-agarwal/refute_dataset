/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if((a*a)+(b*b)==(c*c))
    printf (" right triangle");
else if (a+b<c)
    printf("invalid triangle");
else if ((a*a)+(b*b)<(c*c))
    printf(" obtuse triangle");
else if((a*a)+(b*b)>(c*c))
    printf(" acute triangle");
    // Fill this area with your code.
    return 0;
}