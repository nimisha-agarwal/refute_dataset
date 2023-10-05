/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{ 
float a; float b; float c;

scanf("%f%f%f",&a,&b,&c); /* input a,b,c*/
     if (a+b>c)
    { if ((a*a+b*b)>(c*c) & (a*a+b*b)!=(c*c)) /* expr representation */
    {
      printf("Acute Traingle");
      }
      
      if ((a*a+b*b) == (c*c)) /* 2nd condition */ {
      printf ("Right Traingle");
      }
      
      if ((a*a+b*b)<(c*c)& (a*a+b*b)!=(c*c)){
      printf ("Obtuse Traingle");
      }
     }
      
     if  (a+b<c) {
      printf ("Invalid traingle");      
      }
     
    // Fill this area with your code.
    return 0;
}