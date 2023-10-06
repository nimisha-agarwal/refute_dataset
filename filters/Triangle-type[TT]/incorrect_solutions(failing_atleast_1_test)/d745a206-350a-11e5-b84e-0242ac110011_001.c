/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;//these are the input for sides of triangle
    scanf("%d%d%d",&a,&b,&c);
    if(((a+b)<=c)||((b+c)<=a)||((c+a)<=b))/*the sum of any two sides of
    triangle must be greater than third*/
    printf("Invalid Triangle");
    if(((a+b)>c)&&((b+c)>a)&&((c+a)>b)){
        if(((a*a+b*b)>c*c)&&((a*a+c*c)>b*b)&&((b*b+c*c)>a*a))
        printf("acute");
        else if(((a*a+b*b)==c*c)||((a*a+c*c)==b*b)||((b*b+c*c)==a*a))
        printf("right");
        else 
        printf("obtuse");
    }
    return 0;
}