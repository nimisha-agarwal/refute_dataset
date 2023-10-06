/*compile-errors:e156_271806.c:5:8: warning: expression result unused [-Wunused-value]
 (c>=b)&&(b>=a);
 ~~~~~~^ ~~~~~~
e156_271806.c:5:6: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
 (c>=b)&&(b>=a);
     ^
e156_271806.c:4:9: note: initialize the variable 'b' to silence this warning
 int a,b,c;
        ^
         = 0
e156_271806.c:5:14: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
 (c>=b)&&(b>=a);
             ^
e156_271806.c:4:7: note: initialize the variable 'a' to silence this warning
 int a,b,c;
      ^
       = 0
e156_271806.c:5:3: warning: variable 'c' is uninitialized when used here [-Wuninitialized]
 (c>=b)&&(b>=a);
  ^
e156_271806.c:4:11: note: initialize the variable 'c' to silence this warning
 int a,b,c;
          ^
           = 0
4 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main() {
 int a,b,c;
 (c>=b)&&(b>=a);
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
