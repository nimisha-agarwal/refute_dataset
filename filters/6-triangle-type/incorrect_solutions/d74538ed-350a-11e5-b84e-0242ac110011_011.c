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
if(a+b>c&&a+c>b&&b+c>a){
if(a*a+b*b>c*c){
printf("ACUTE TRIANGLE");    
}else if(a*a+b*b==c*c){
printf("RIGHT TRIANGLE");
}else if(a*a+b*b<c*c){
printf("OBTUSE TRIANGLE");    
}else 
printf("INVALID TRIANGLE");
}
    return 0;
}