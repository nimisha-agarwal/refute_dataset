/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);//a>b>c 
    if((c*c+b*b)==a*a)
    printf("Right Triangle");
    else if(a==b||a==c||b==c)
    printf("acute triangle");
    else if(a>=(b+c))
    printf("invalid triangle");
    return 0;
}