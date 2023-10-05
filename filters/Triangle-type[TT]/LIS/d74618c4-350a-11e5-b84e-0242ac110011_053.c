/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c ;
    scanf("%d%d%d",&a,&b,&c);
    if (a+c<=b&&a+b<=c&&b+c<=a)//sum of two sides if less than or equal to third side then triangle is not possible
    {
        printf("Invalid Triangle\n");
    }
    else if (b*b==a*a+c*c||a*a==b*b+c*c||c*c==a*a+b*b)//pythagorean right triangle formula
    {
        printf("Right Triangle\n");
    }
    
    else if (b*b>a*a+c*c||a*a>b*b+c*c||c*c>a*a+b*b)//sum of  two sides if more than  third side then  triangle is obtuse
    {
        printf("Obtuse Triangle\n");
    
    }
    else if (b*b<a*a+c*c||a*a<b*b+c*c||c*c<a*a+b*b)//sum of square of two sides if less than the square of third side then  triangle is acute
    {
        printf("Acute Triangle\n");
        
    }
    return 0;
    }