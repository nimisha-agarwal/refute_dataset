/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if((a*a)+(b*b)==(c*c))
    printf (" Right triangle");
else if (a+b<c)
    printf("Invalid triangle");
else if ((a*a)+(b*b)<(c*c))
    printf(" Obtuse triangle");
else if((a*a)+(b*b)>(c*c))
    printf(" Acute triangle");
    // Fill this area with your code.
    return 0;
}