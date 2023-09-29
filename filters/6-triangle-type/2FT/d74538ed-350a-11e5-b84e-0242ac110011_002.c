/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a+b>c && a+c>b && b+c>a){
if(a*a+b*b > c*c){
printf("Acute Triangle");    
}else if(a*a+b*b==c*c){
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