/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf ("%d %d %d", &a,&b,&c);
    int d,e,f;
    d=((b*b)+(c*c)-(a*a))/(2*b*c);
    e=((b*b)+(a*a)-(c*c))/(2*a*b);
    f=((a*a)+(c*c)-(b*b))/(2*a*c);
    if ((a+b>c) && (b+c>a) && (a+c>b))
    {
        if ((a*a)+(b*b)==(c*c) && (d==0 || e==0 || f==0))
        {
            printf("Right Triangle");
        }
        if((a*a)+(b*b)>(c*c) && (d>0 || e>0 || f>0))
        {
            printf("Acute Triangle");
        }
        if((a*a)+(b*b)<(c*c) && (d<0 || e<0 || f<0))
        {
            printf("Obtuse Triangle");
        }
    }
    
        else {
            printf("Invalid Triangle");
             }

    return 0;

}