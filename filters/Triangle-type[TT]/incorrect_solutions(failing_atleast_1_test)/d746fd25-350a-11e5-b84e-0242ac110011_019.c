/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((c*c)<=((a*a)+(b*b))){printf("triangle is acute");}
    if((c*c)==((a*a)+(b*b))){printf("triangle is right");}
    if((c*c)>=((a*a)+(b*b))){printf("triangle is obtuse");}
    if(a+b<c){printf("invalid triangle");}
    return 0;
}