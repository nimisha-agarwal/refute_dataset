/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
 int a,b,c;
 scanf("%d %d %d",&a,&b,&c);
 if(a+b>c || b+c>a){
   if(c*c==a*a+b*b)
     printf("Right Triangle");
     else if(c*c>a*a+b*b){
     printf("Obtuse Triangle");
     }
     else if(c*c<a*a+b*b){
      printf("Acute Triangle");
         }
         else printf("invalid triangle");
 }
    return 0;
}