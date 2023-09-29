/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main ()
{
    int a;
    int b;
    int c;
    scanf("%d%d%d", &a, &b, &c);
    if((a+b>c) && (a+c>b) && (b+c>a)){
        if(((a*a)+(b*b)==(c*c))||((a*a)+(c*c)==(b*b))||((b*b)+(c*c)==(a*a))){
        printf("Right Triangle");
        }
        if(((a*a)+(b*b)>(c*c))||((a*a)+(c*c)>(b*b))||((b*b)+(c*c)>(a*a))){
        printf("Acute Triangle");
        }
        else{
        printf("Obtuse Triangle");
        }
    }
    else{
        printf("Invalid Triangle");
    }
    return 0;
    return 0;
}