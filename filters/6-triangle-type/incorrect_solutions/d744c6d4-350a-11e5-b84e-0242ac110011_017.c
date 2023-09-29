/*compile-errors:e156_271790.c:6:9: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
    if (a+b<c)
        ^
e156_271790.c:5:10: note: initialize the variable 'a' to silence this warning
    int a,b,c;
         ^
          = 0
e156_271790.c:6:13: warning: variable 'c' is uninitialized when used here [-Wuninitialized]
    if (a+b<c)
            ^
e156_271790.c:5:14: note: initialize the variable 'c' to silence this warning
    int a,b,c;
             ^
              = 0
e156_271790.c:6:11: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
    if (a+b<c)
          ^
e156_271790.c:5:12: note: initialize the variable 'b' to silence this warning
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
    if (a+b<c)
    {
        printf("Invalid Triangle");
    }
    if (b+c<a)
    {
        printf("Invalid Triangle");
    }
    if (a+c<b)
    {
        printf("Invalid Triangle");
    }
    return 0;
}