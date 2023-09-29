/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{ 
float a; float b; float c;

scanf("%f%f%f",&a,&b,&c); /* input a,b,c*/

     if (a+b>c){
     { if ((a*a+b*b)>(c*c)) /* expr representation */
    {
      printf("Acute Triangle");
      }
      
      if ((a*a+b*b) == (c*c)) /* 2nd condition */ {
      printf ("Right Triangle");
      }
      
      if ((a*a+b*b)<(c*c)){
      printf ("Obtuse Triangle");
      }
     }
     }
     if  (a+b<c) {
      printf ("Invalid Triangle");      
      }
     
    
    return 0;
}