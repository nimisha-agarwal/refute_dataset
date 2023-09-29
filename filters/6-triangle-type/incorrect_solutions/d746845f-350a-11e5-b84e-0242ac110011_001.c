/*execute-result:OK*/
/*compile-errors:e156_271869.c:6:5: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
if((a*a)+(b*b)==(c*c))
    ^
e156_271869.c:5:6: note: initialize the variable 'a' to silence this warning
int a,b,c;
     ^
      = 0
e156_271869.c:6:11: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
if((a*a)+(b*b)==(c*c))
          ^
e156_271869.c:5:8: note: initialize the variable 'b' to silence this warning
int a,b,c;
       ^
        = 0
e156_271869.c:6:18: warning: variable 'c' is uninitialized when used here [-Wuninitialized]
if((a*a)+(b*b)==(c*c))
                 ^
e156_271869.c:5:10: note: initialize the variable 'c' to silence this warning
int a,b,c;
         ^
          = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
int a,b,c;
if((a*a)+(b*b)==(c*c))
    printf (" right triangle");
else if (a+b<c)
    printf("invalid triangle");
else if ((a*a)+(b*b)<(c*c))
    printf(" obtuse triangle");
else if((a*a)+(b*b)>(c*c))
    printf(" acute triangle");
    // Fill this area with your code.
    return 0;
}