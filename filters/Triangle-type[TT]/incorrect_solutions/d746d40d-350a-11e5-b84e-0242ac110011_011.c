/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;
    scanf("%d%d%d", &a, &b, &c);
    if((a*a) + (b*b) == (c*c)){
        printf("Right Triangle");
    }
    if((a*a) + (b*b) > (c*c)){
        printf("Acute Triangle");
    }
    if((a*a) + (b*b) < (c*c)){
        printf("Obtuse Tringle");
    }
    else{
        printf("Invalid Tringle");
    }
    return 0;
}