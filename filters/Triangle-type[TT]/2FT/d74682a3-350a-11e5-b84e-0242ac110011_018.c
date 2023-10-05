/*compile-errors:e156_271868.c:5:20: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d%d%d",a,b,c);
           ~~      ^
e156_271868.c:5:22: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d%d%d",a,b,c);
             ~~      ^
e156_271868.c:5:24: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d%d%d",a,b,c);
               ~~      ^
e156_271868.c:5:22: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
    scanf("%d%d%d",a,b,c);
                     ^
e156_271868.c:4:12: note: initialize the variable 'b' to silence this warning
    int a,b,c;
           ^
            = 0
e156_271868.c:5:24: warning: variable 'c' is uninitialized when used here [-Wuninitialized]
    scanf("%d%d%d",a,b,c);
                       ^
e156_271868.c:4:14: note: initialize the variable 'c' to silence this warning
    int a,b,c;
             ^
              = 0
e156_271868.c:5:20: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
    scanf("%d%d%d",a,b,c);
                   ^
e156_271868.c:4:10: note: initialize the variable 'a' to silence this warning
    int a,b,c;
         ^
          = 0
6 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",a,b,c);
    if((a+b<c)||(a+c<b)||(b+c<a)){
        printf("Invalid Triangle");
    }
    else if(((a*a)+(b*b)>(c*c))&&
    ((a*a)+(c*c)>(b*b))&&
    ((c*c)+(b*b)>(a*a)))
    {
        printf("Acute triangle");
    }
    else if((a*a)+(b*b)==(c*c)||
    (a*a)+(c*c)==(b*b)||
    (b*b)+(c*c)==(a*a))
    {
        printf("Right Triangle");
    }
    else if((a*a)+(b*b)<(c*c)||
    (a*a)+(c*c)<(b*b)||
    (b*b)+(c*c)<(a*a))
    {
        printf("Obtuse Triangle");
    }
    return 0;
}