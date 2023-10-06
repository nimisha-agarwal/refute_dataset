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
        if((a*a) + (b*b) == (c*c)){
        printf("Right Triangle");
        }
        if((a*a) + (b*b) > (c*c)){
        printf("Acute Triangle");
        }
        if((a*a) + (b*b) < (c*c)){
        printf("Obtuse Triangle");
        }
    }
    else{
        printf("Invalid Triangle");
    }
    return 0;
}