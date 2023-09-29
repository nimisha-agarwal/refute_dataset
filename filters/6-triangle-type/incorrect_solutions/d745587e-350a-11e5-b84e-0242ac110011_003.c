/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
    {
        printf("Right Triangle");
    }

    return 0;
}