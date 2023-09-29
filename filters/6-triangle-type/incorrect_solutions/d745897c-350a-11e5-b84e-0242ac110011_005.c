/*compile-errors:e156_271827.c:23:15: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if (cosine=0)
        ~~~~~~^~
e156_271827.c:23:15: note: place parentheses around the assignment to silence this warning
    if (cosine=0)
              ^
        (       )
e156_271827.c:23:15: note: use '==' to turn this assignment into an equality comparison
    if (cosine=0)
              ^
              ==
1 warning generated.*/
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
    if (cosine=0)
    printf("Right Triangle");
    return 0;
}