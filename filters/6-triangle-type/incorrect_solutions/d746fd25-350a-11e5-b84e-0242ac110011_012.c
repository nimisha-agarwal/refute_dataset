/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>/*to find out wheather a triangle is acute,obtuse,right or invalid triangle*/
int main()
{
    int a,b,c;/*three sides of triangle*/
    scanf("%d%d%d",&a,&b,&c);
     if(a+b<c){printf("Invalid Triangle");}
     else{
    if((c*c)==((a*a)+(b*b))){printf("Right Triangle");}/*condition for right triangle*/
    if((c*c)<((a*a)+(b*b))){printf("Acute Triangle");}/*condition for acute triangle*/
    if((c*c)>((a*a)+(b*b))){printf("Obtuse Triangle");}/*condition for obtuse triangle*/
     }
    return 0;
}