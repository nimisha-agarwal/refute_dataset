/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a+b)>c && (a+c)>b && (b+c)>a)
    {if((a*a == (b*b)+(c*c))||(b*b == (a*a)+(c*c))||(c*c == (b*b)+(a*a)))
    printf("Right Triangle");
    }
    else 
    printf("Invalid Triangle");
    return 0;
}