/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{ 
float a; float b; float c;

scanf("%f%f%f",&a,&b,&c); /* input a,b,c*/

      if ((a*a+b*b)>(c*c)) /* expr representation */ {
      printf("Acute Traingle");
      }
      
      if ((a*a+b*b) == (c*c)) /* 2nd condition */ {
      printf ("Right Traingle");
      }
      
      if ((a*a+b*b)<(c*c)){
      printf ("Obtuse Traingle");
      }
    // Fill this area with your code.
    return 0;
}