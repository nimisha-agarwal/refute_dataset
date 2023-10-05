/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf ("%d%d%d",&a,&b,&c);
    if ((a<=b) && (b<=c) && a!=0 && b!=0 && c!=0)
    {
        if (c*c == a*a + b*b)
           printf ("Right Triangle");
        else if (c*c < a*a + b*b)
           printf ("Acute Triangle");
        else if (c >= a + b)
           printf ("Invalid Triangle");   
        else
           printf ("Obtuse Triangle");
    }
    else if ((a<=c) && (c<=b) && a!=0 && b!=0 && c!=0)
    {
        if (b*b == a*a + c*c)
           printf ("Right Triangle");
        else if (b*b < a*a + c*c)
           printf ("Acute Triangle");
        else if (b >= a + c)
           printf ("Invalid Triangle");   
        else
           printf ("Obtuse Triangle");
    } 
    
    if (a==0 || b==0 || c==0)
       printf ("Invalid Triangle");
    return 0;
}