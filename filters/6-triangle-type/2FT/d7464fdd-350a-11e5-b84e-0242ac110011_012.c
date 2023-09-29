/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
            if((c*c)==((b*b)+(a*a)))
            printf("Right Triangle");
            else if((c*c)>((b*b)+(a*a)))
            printf("Obtuse Triangle");
            else
            printf("Acute Triangle");
    }
    else
    printf("Invalid Triangle");
    return 0;
}