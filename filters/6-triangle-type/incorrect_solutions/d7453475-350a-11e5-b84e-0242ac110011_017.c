/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main() {
 int a,b,c;
 scanf("%d %d %d",&a,&b,&c);    //read inputs from the user.
 int d;
 d=c*c-(a*a+b*b);               //consider an expression to check the                                    nature of triangle.
 if ((a+b<c)||(b+c<a)||(a+c<b)) //check if the triangle is valid using                                   'OR' boolean expression. 
    { printf("Invalid Triangle"); }
    
 else 
    {  if (d==0)                    //using nested 'if else'.
          { printf("Right Triangle"); }
        
      else                          //using a nested 'if else'
          {   if (d>0)                
                { printf("Obtuse Triangle"); }
              else 
                { printf("Acute Triangle"); }
          }      
    } 
     
       
 return 0;
 }
