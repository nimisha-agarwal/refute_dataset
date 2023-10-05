/*execute-result:RT*/
/*compile-errors:e156_271838.c:5:21: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
   scanf("%d %d %d",a,b,c);
          ~~        ^
e156_271838.c:5:23: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
   scanf("%d %d %d",a,b,c);
             ~~       ^
e156_271838.c:5:25: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
   scanf("%d %d %d",a,b,c);
                ~~      ^
e156_271838.c:6:11: warning: expression result unused [-Wunused-value]
   if (a+b>c,b+c>a,c+a>b){
       ~~~^~
e156_271838.c:6:17: warning: expression result unused [-Wunused-value]
   if (a+b>c,b+c>a,c+a>b){
             ~~~^~
e156_271838.c:5:21: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
   scanf("%d %d %d",a,b,c);
                    ^
e156_271838.c:4:9: note: initialize the variable 'a' to silence this warning
   int a,b,c;
        ^
         = 0
e156_271838.c:5:23: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
   scanf("%d %d %d",a,b,c);
                      ^
e156_271838.c:4:11: note: initialize the variable 'b' to silence this warning
   int a,b,c;
          ^
           = 0
e156_271838.c:5:25: warning: variable 'c' is uninitialized when used here [-Wuninitialized]
   scanf("%d %d %d",a,b,c);
                        ^
e156_271838.c:4:13: note: initialize the variable 'c' to silence this warning
   int a,b,c;
            ^
             = 0
8 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
   int a,b,c;
   scanf("%d %d %d",a,b,c);
   if (a+b>c,b+c>a,c+a>b){
       printf("triangle");
   }
   else {
       printf("invalid triangle");
       }
    return 0;
}