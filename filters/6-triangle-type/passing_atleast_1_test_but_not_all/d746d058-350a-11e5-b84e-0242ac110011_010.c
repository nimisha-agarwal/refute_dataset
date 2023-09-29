/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c; //initialising the three integers
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a+b<c || b+c<a || a+c<b) //checking the condition for an invalid triangle
    {
        printf("Invalid Triangle");
    }
    else //nesting loops
    { 
        if ((((a*a)+(b*b)-(c*c))==0)
        || (((a*a)+(c*c)-(b*b))==0)
        || (((b*b)+(c*c)-(a*a))==0)) //conditions for a right angle triangle
        {
            printf("Right Triangle");
        }
        else{
            if ((((a*a)+(b*b)-(c*c))<0)
            || (((a*a)+(c*c)-(b*b))<0)
            || (((b*b)+(c*c)-(a*a))<0)) // conditions for an obtuse angle triangle
            {
                printf("Obtuse Triangle");
            }
            else
            {
                printf("Acute Triangle"); //the only other optionl left, i.e. acute angle triangle
            }
        }
    }
    return 0;
    }