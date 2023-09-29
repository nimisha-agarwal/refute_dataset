/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
int a,b,c;/*a,b,c are sides of triangle*/
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a+b>c && a+c>b && b+c>a){ /*for valid triangle*/
if(a*a+b*b>c*c||a*a+c*c>b*b||b*b+c*c>a*a){
printf("Acute Triangle");    
}else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
printf("Right Triangle");
}else{
printf("Obtuse Triangle");    
}
}
else{ 
printf("Invalid Triangle");
}
    return 0;
}