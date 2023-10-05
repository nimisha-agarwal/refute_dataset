/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;
    scanf("%d",&a);//a is any one side of the triangle
    scanf("%d",&b);//b is any one side of the triangle
    scanf("%d",&c);//c is any one side of the triangle
    if(a+b>c&&b+c>a&&c+b>a)
    {
        if(a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b)
        {
            printf("Right Triangle");
        }
        else if(a*a+b*b>c*c&&b*b+c*c>a*a&&c*c+a*a>b*b)
        {
            printf("Acute Triangle");
        }
        else
        {
            printf("Obtuse Triangle");
        }
    }
    else
    {
        printf("Invalid Triangle");
    }
    return 0;
}