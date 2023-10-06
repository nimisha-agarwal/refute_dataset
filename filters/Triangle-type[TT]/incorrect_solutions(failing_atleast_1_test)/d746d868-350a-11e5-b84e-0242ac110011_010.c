/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c)){
        if((a*a)<(b*b)+(c*c)){
            printf("Acute Triangle");
        }
        if((a*a)==(b*b)+(c*c)){
            printf("Right tringle");
        }
        if((a*a)>(b*b)+(c*c)){
            printf("Obtuse tringle");
        }
    }
    return 0;
}