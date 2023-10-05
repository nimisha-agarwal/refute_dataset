/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c); //  Scan the sides of triangle
    
    if(a+b>c && b+c >a && a+c>b) //check if this pair can be side of triangle
    {if(a*a+b*b==c*c && b*b+c*c==a*a && a*a+c*c==b*b)      
      {printf("Right Triangle");} 
     else if(a*a+b*b> c*c && b*b+c*c>a*a && a*a+c*c>b*b)// Condition for acute triange
     {printf("Acute Triangle");} 
     else if(a*a+b*b-c*c <0 && b*b+c*c<a*a && a*a+c*c<b*b) // Condition for obtuse triangle
     {printf("Obtuse Triangle");}
        
        
    }
    else
    {printf("Invalid Triangle");}
    
    return 0;}
    