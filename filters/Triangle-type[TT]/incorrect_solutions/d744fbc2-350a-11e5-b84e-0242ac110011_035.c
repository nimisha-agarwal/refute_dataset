/*compile-errors:e156_271801.c:14:46: warning: '&&' within '||' [-Wlogical-op-parentheses]
    (((b*b)>(a*a)+(c*c))||((a*a)>(b*b)+(c*c))&&((c*c)>(a*a)+(b*b))){
                        ~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~
e156_271801.c:14:46: note: place parentheses around the '&&' expression to silence this warning
    (((b*b)>(a*a)+(c*c))||((a*a)>(b*b)+(c*c))&&((c*c)>(a*a)+(b*b))){
                                             ^
                          (                                       )
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c; /* a,b,c are sides of triangle */
    scanf("%d %d %d",&a,&b,&c);
    if
    (((a*a)<(c*c)+(b*b))&&((b*b)<(a*a)+(c*c))&&((c*c)<(a*a)+(b*b))){
    printf("Acute Triangle");
    }else if /* Condition for right triangle */
    ((b*b)==(a*a)+(c*c)||((c*c)==(b*b)+(a*a))||((a*a)==(b*b)+(c*c))){
    printf("Right Triangle");
    }else if /* Condition for obtuse triangle */
    (((b*b)>(a*a)+(c*c))||((a*a)>(b*b)+(c*c))&&((c*c)>(a*a)+(b*b))){
    printf("Obtuse Triangle");
    }else{
    printf("Invalid Triangle");    
    }
    return 0;
}