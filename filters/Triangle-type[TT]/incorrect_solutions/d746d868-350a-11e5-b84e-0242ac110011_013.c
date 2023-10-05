/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a>=b)&&(a>=c)){
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
    if((b>=a)&&(b>=c)){
        if((b*b)<(a*a)+(c*c)){
            printf("Acute Triangle");
        }
        if((b*b)==(a*a)+(c*c)){
            printf("Right tringle");
        }
        if((b*b)>(a)+(c*c)){
            printf("Obtuse tringle");
        }
    }

    return 0;
}