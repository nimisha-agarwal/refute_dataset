/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main() {
 int a,b,c;
 scanf("%d %d %d",&a,&b,&c);    //read inputs from the user.
 int d;
 if ((c>=b)&&(c>=a))            //case1: c is greatest side.
 { d=c*c-(a*a+b*b); }              //consider an expression to check                                      nature of triangle.
 if ((a>=b)&&(a>=c))            //case2: a is greatest side.
 { d=a*a-(b*b+c*c); }              //consider an expression to check                                      nature of triangle.
 
 if ((b>=a)&&(b>=c))            //case3: b is greatest side.
 {d=b*b-(a*a+c*c); }               //consider an expression to check                                      nature of triangle.
 
 
 
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