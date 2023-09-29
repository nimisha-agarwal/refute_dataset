/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
    {
            printf("Right triangle");
    }
    else if(a*a/2<b*b+c*c<a*a)
    {
        printf("Obtuse");
        
    }
    else if(a*a+b*b>c*c)
    {
        printf("acute triangle");
    }
    else if (a+b<c)
    {
        printf("invalid triangle");
        
    }
    return 0;
}