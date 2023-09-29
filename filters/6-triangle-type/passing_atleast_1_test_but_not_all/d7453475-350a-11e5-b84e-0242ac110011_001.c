/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main() {
 int a,b,c;
 scanf("%d %d %d",&a,&b,&c);    //input 3 sides of triangle as a,b,c.
 int d;
 d=c*c-(a*a+b*b);               //consider an expression to check the                                    nature of triangle.
 if (d==0) {                     //using conditional 'if else'
     printf("Right Triangle"); 
 }
 else {                         //using a nested 'if else'
     if (d>0) {
         printf("Obtuse Triangle");
     }
     else {
         printf("Acute Triangle");
     }
 return 0;}

} 
