/*compile-errors:e156_271862.c:6:22: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d %d %d",a,b,c);
           ~~        ^
e156_271862.c:6:24: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d %d %d",a,b,c);
              ~~       ^
e156_271862.c:6:26: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d %d %d",a,b,c);
                 ~~      ^
e156_271862.c:6:22: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
    scanf("%d %d %d",a,b,c);
                     ^
e156_271862.c:5:10: note: initialize the variable 'a' to silence this warning
    int a,b,c;
         ^
          = 0
e156_271862.c:6:24: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
    scanf("%d %d %d",a,b,c);
                       ^
e156_271862.c:5:12: note: initialize the variable 'b' to silence this warning
    int a,b,c;
           ^
            = 0
e156_271862.c:6:26: warning: variable 'c' is uninitialized when used here [-Wuninitialized]
    scanf("%d %d %d",a,b,c);
                         ^
e156_271862.c:5:14: note: initialize the variable 'c' to silence this warning
    int a,b,c;
             ^
              = 0
6 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",a,b,c);

    return 0;
}