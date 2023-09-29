/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
    if((c*c == a*a + b*b) || (a*a == b*b + c*c) || (b*b == a*a + c*c))
    printf("Right Triangle");
       else if( (a>b && a>c) && (a*a < b*b + c*c) )
    printf("Acute Triangle");
       else if( (b>c && b>a) && (b*b < a*a + c*c) )
       printf("Acute Triangle");
       else if( (c>a && c>a) && (c*c < a*a + b*b) )
       printf("Acute Triangle");
       else if( (c>a && c>b) && (c*c > a*a + b*b) )
       printf("Obtuse Triangle");
       else if((a>b && a>c) && (a*a > b*b + c*c))
       printf("Obtuse Triangle");
       else if((b>a && b>c) && (b*b > a*a + c*c))
       printf("Obtuse Triangle");
       else if( (a+b < c) || (b+c < c) || (a+c < b) )
       printf("Invalid Triangle");
    else
       printf("Use Other Numbers");
    return 0;
}