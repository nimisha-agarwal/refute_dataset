/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b)
    {
        printf("Right Triangle");
    }
    else if(a*a+b*b>c*c&&b*b+c*c>a*a&&c*c+a*a>b*b)
    {
        printf("Acute Triangle");
    }
    else if(a*a+b*b<c*c&&b*b+c*c<a*a&&c*c+a*a<b*b)
    {
        printf("Obtuse Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }
    return 0;
}