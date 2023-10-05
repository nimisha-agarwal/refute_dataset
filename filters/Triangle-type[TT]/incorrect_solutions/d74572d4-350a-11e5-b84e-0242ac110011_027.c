/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
# include <stdio.h>
 int main() {
     int a,b,c;
     scanf("%d",&a);
     scanf("%d",&b);
     scanf("%d",&c);
     if((a||b)<c) {
         if(c>a+b){printf("Invalid Triangle");}
         if(c*c>a*a+b*b){printf("Obtuse Triangle");}
         if(c*c<a*a+b*b){printf("Acute Triangle");}
         if(c*c==a*a+b*b){printf("Right Triangle");}
     }
     
     return 0;
 }