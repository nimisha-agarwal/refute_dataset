/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>
int main(){

float a; float b; float c;

scanf("%f%f%f",&a,&b,&c); /* input a,b,c*/

    if ((c>a & c>b))
    {  if (a+b>c)
            {
               if ((a*a+b*b)>(c*c)) /* expr representation */
                  {
                    printf("Acute Triangle");
                     }
      
      if ((a*a+b*b) == (c*c)) /* 2nd condition */ 
         {
           printf ("Right Triangle");
             }
      
      if ((a*a+b*b)<(c*c)){
      printf ("Obtuse Triangle");
      }
     
     }
     if  (a+b<c) {
      printf ("Invalid Triangle");      
      }}
      
     if ((a<b) & (c<b)){ 
         if (a+c>b){
             if ((a*a+c*c)>(b*b)){
             printf("Acute Triangle");
         }
             if ((a*a+c*c) == (b*b)){
                 printf("Right Triangle");
             }
             if ((a*a+c*c)<(b*b)){
                 printf("Obtuse Triangle");
             }}
             if (a+c>b){
                 printf("Invalid triangle1");
             }
     
     if ((b<a) & (c<a)){
       if (b+c>a){
       if ((b*b+c*c)>(a*a)){  
       printf("Acute Triangle"); 
       }
       if ((b*b+c*c)==(a*a)) {
       printf("Right Triangle");  
       }
       if ((b*b+c*c)<(a*a)){
       printf("Obtuse Triangle");  
       }}
       if (b+c<a){
       printf("Invalid triangle");  
       }
       }
}
       
       return 0;
     }