/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a+b<c || b+c<a || a+c<b)
    {
        printf("Invalid Triangle");
    }
    else
    { 
        if ((((a*a)+(b*b)-(c*c))==0)
        || (((a*a)+(c*c)-(b*b))==0)
        || (((b*b)+(c*c)-(a*a))==0))
        {
            printf("Right Triangle");
        }
        else{
            if ((((a*a)+(b*b)-(c*c))<0)
            || (((a*a)+(c*c)-(b*b))<0)
            || (((b*b)+(c*c)-(a*a))<0))
            {
                printf("Obtuse Triangle");
            }
            else
            {
                printf("Acute Triangle");
            }
        }
    }
    return 0;
    }