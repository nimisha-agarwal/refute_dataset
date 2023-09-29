/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a; int b; int c; 
    
    scanf("%d%d%d",&a,&b,&c);  // for input
    
    if (a+b<=c||b+c<=a||c+a<=b)  // condition for invalid triangle
    {    
        
        printf("Invalid Triangle"); 
    }
    
    else if (a*a+b*b==c*c)          // condition for right triangle
    {   
        
        printf("Right Triangle");
    }
    else if(a*a+b*b>c*c)          //condition for acute triangle
    {  
        
        printf("Acute Triangle");
    }
    else if(a*a+b*b<c*c)          //condition for obtuse triangle
    {  
        printf("Obtuse Triangle");
    }
    
    
    
    
    
    
  return 0;
}