/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((c*c)==((a*a)+(b*b))){printf("Right Triangle");}
    if((c*c)<((a*a)+(b*b))){printf("Acute Triangle");}
    if(a+b<c){printf("Invalid Triangle");}
    else{printf("Obtuse Triangle");}
    return 0;
}