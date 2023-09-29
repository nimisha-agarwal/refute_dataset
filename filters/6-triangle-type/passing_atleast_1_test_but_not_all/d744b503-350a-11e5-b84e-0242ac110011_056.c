/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf ("%d %d %d", &a,&b,&c);
    if ((a+b)>c && (b+c)>a)
    {
        if ((a*a)+(b*b)==(c*c))
        {
            printf("Right Triangle");
        }
        if((a*a)+(b*b)>(c*c))
        {
            printf("Acute Triangle");
        }
        if((a*a)+(b*b)<(c*c))
        {
            printf("Obtuse Triangle");
        }
        }
    
        else {
            printf("Invalid Triangle");
    }

    return 0;

}