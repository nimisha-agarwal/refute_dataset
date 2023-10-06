/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf ("%d %d %d",&a, &b, &c);
    if ((a>=b)&&(a>=c)){
        if (a>=(b+c))
        printf ("Invalid Triangle");
        else if ((a*a)>((b*b)+(c*c)))
        printf ("Obtuse Triangle");
        else if ((a*a)==((b*b)+(c*c)))
        printf ("Right Triangle");
        else printf ("Acute Triangle");
    }
    return 0;
}