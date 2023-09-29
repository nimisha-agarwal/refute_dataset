/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{ int a,b,c;
  scanf("%d %d %d", &a, &b, &c);
  if(a+b>c&&b+c>a&&a+c>b)//condition for three sides to form triangle
  {
      if(a*a+b*b>c*c)//condition for triangle to be acute triangle
      {
          printf("Acute Triangle");
      }
    else if(a*a+b*b<c*c)//condition for triangle to be obtuse triangle
    {
          printf("Obtuse Triangle");
     }
          else//(a*a+b*b=c*c) condition for triangle to be right triangle
          {
              printf("Right Triangle");
          }
          }
     else//(a+b<c) invalid conditin to be a triangle
     {
         printf("Invalid Triangle");
     } 
      
  
    // Fill this area with your code.
    return 0;
}