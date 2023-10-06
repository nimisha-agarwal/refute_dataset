/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
 int a,b,c;
 scanf("%d %d %d",&a,&b,&c);
 if(a+b>c){
   if(c*c==a*a+b*b)
     printf("right triangle");
     else if(c*c>a*a+b*b){
     printf("obtuse triangle");}
     
     else if(c*c<a*a+b*b){
         printf("acute triangle");
         }
         else printf("invalid triangle");
 }
    return 0;
}