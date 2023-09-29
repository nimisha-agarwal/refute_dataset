/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);// Fill this area with your code.
    if(c>=b && c>=a)
    {
        if(c>=a+b)
            printf("Invalid Triangle");
        else
        {
            if(c*c>a*a + b*b)
                printf("Obtuse Triangle");
            else if(c*c==a*a+b*b)
            {
                printf("Right Triangle");
            }
            else{
                printf("Acute Triangle");
            }
        }
    }
    return 0;
}