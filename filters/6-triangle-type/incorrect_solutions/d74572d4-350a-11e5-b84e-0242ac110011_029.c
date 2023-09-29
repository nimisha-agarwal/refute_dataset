/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
# include <stdio.h>
 int main() {
     int a,b,c;
     scanf("%d",&a);   //taking 
     scanf("%d",&b);   //values of
     scanf("%d",&c);   //3 sides
     if((a||b)<c) {    //largest side=c
                if(c>a+b){printf("Invalid Triangle");}
             if((a+b>c)&&(b+c>a)&&(a+c>b)){
                    if(c*c>a*a+b*b){printf("Obtuse Triangle");}
                    if(c*c<a*a+b*b){printf("Acute Triangle");}
                   if(c*c==a*a+b*b){printf("Right Triangle");}}
     }
         
     return 0;
 }