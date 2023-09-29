/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c); //  Scan the sides of triangle
    /* We will now sort them in incresing order i.e a<= b<= c */
    if(a+b>c && b+c >a && a+c>b) //check if this pair can be side of triangle
    {if(a^2+b^2-c^2 ==0 || b^2+c^2==a^2 || a^2+c^2==b^2)      // Condition of right triangle
      printf("Right Triangle"); 
     else if(a^2+b^2-c^2 > 0 && b^2+c^2>a^2 && a^2+c^2>b^2)// Condition for acute triange
     printf("Acute Triangle"); 
     else if(a^2+b^2-c^2 <0 && b^2+c^2<a^2 && a^2+c^2<b^2) // Condition for obtuse triangle
     printf("Obtuse Triangle");
        
        
    }
    else
    {printf("Invalid Triangle");}
    
    return 0;}
    