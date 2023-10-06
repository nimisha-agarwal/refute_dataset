/*compile-errors:e156_271804.c:7:14: warning: variable 'c' is uninitialized when used here [-Wuninitialized]
    if (a+b>=c || b+c>=a || c+a>=b)
             ^
e156_271804.c:6:14: note: initialize the variable 'c' to silence this warning
    int a,b,c;
             ^
              = 0
e156_271804.c:7:9: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
    if (a+b>=c || b+c>=a || c+a>=b)
        ^
e156_271804.c:6:10: note: initialize the variable 'a' to silence this warning
    int a,b,c;
         ^
          = 0
e156_271804.c:7:11: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
    if (a+b>=c || b+c>=a || c+a>=b)
          ^
e156_271804.c:6:12: note: initialize the variable 'b' to silence this warning
    int a,b,c;
           ^
            = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    // Fill this area with your code.
    int a,b,c;
    if (a+b>=c || b+c>=a || c+a>=b)
    { printf ("Invalid Triangle");}
    if (a*a==b*b + c*c || b*b==a*a+c*c || c*c==a*a+b*b)
        {printf("Right Triangle");}
    
    return 0;
}