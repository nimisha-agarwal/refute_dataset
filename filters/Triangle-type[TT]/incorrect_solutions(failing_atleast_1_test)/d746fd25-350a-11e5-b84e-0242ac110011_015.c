/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((c*c)==((a*a)+(b*b))){printf("right triangle");}
    if((c*c)<=((a*a)+(b*b))){printf("acute triangle");}
    if(a+b<c){printf("invalid triangle");}
    if((c*c)>=((a*a)+(b*b))){printf("obtuse triangle");}
    return 0;
}