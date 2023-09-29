/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c,tmp;
    scanf("%d,%d,%d",&a,&b,&c);
    
    if (a<b)
    {
       tmp=a;
       a=b;
       b=tmp;
    }
    if (a<c)
    {
       tmp=a;
       a=c;
       c=tmp;
    }
    
    if (a > b + c)
    {
        printf("Invalid Triangle");
    }
    else if ( (a*a) > ( (b*b) + (c*c) )  )
    {
        printf("Obtuse Triangle");
    }
    else if ( (a*a) < ( (b*b) + (c*c) )  )
    {
        printf("Acute Triangle");
    }
    else
    {
        printf("Right Triangle");
    }
    return 0;
}