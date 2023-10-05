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
            printf("Right Tringle");
        }
        if((a*a)>(b*b)+(c*c)){
            printf("Obtuse Tringle");
        }
    }
    if((b>=a)&&(b>=c)){
        if((b*b)<(a*a)+(c*c)){
            printf("Acute Triangle");
        }
        if((b*b)==(a*a)+(c*c)){
            printf("Right Tringle");
        }
        if((b*b)>(a*a)+(c*c)){
            printf("Obtuse Tringle");
        }
    }
    if((c>=a)&&(c>=b)){
        if((c*c)<(a*a)+(b*b)){
            printf("Acute Triangle");
        }
        if((c*c)==(a*a)+(b*b)){
            printf("Right Tringle");
        }
        if((c*c)>(a*a)+(b*b)){
            printf("Obtuse Tringle");
        }
    }
    return 0;
}