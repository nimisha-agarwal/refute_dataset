/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    // Fill this area with your code.
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b<c)||(a+c<b)||(b+c<a))
    printf("Invalid Triangle");
    else{
    int x;
    if (a>b)
    x=a;
    else
    x=b;
    if (x<c)
    x=c;
    float cosine;
    cosine=(a*a+b*b-c*c);
    if (cosine>0)
    printf("Acute Triangle");
    if (cosine<0)
    printf("Obtuse Triangle");
    if (cosine==0)
    printf("Right Triangle");
    }
    return 0;
}