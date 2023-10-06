/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf ("%d%d%d",&a,&b,&c);
    if ((a<=b) && (b<=c))
    {
        if (c*c == a*a + b*b)
           printf ("Right Triangle");
        else if (c*c < a*a + b*b)
           printf ("Acute Triangle");
        else if (c > a + b)
           printf ("Invalide Triangle");   
        /*if (c*c > a*a + b*b)*/
        else
           printf ("Obtuse Triangle");
    }
    if ((a<=c) && (c<=b))
    {
        if (b*b == a*a + c*c)
           printf ("Right Triangle");
        else if (b*b < a*a + c*c)
           printf ("Acute Triangle");
        else if (b > a + c)
           printf ("Invalide Triangle");   
        /*if (c*c > a*a + b*b)*/
        else
           printf ("Obtuse Triangle");
    }
    return 0;
}