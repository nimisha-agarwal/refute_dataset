/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    int d=0;
    scanf("%d %d %d",&a,&b,&c);//a>b>c 
    if (a<b||a<c)
    {
        if(b>=c)
    {
    a=d;
    a=b;
    b=d;
        
    }
    else if(c>=b)
    {
        a=d;
    a=c;
    c=d;
    }
    }
    printf("%d ,%d ,%d", a, b ,c);
    if((c*c+b*b)==a*a)
    printf("Right Triangle");
    else if((c*c+b*b)>a*a)
    printf("Acute Triangle");
    else if((c*c+b*b)<a*a)
    printf("Obtuse Traingle");
    else if ((b+c)<=a)
    printf("Invalid Triangle");
    return 0;
}