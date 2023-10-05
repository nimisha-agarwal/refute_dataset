/*execute-result:OK*/
/*compile-errors:e156_271873.c:6:20: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d%d%d",a,c,b);
           ~~      ^
e156_271873.c:6:22: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d%d%d",a,c,b);
             ~~      ^
e156_271873.c:6:24: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d%d%d",a,c,b);
               ~~      ^
e156_271873.c:6:22: warning: variable 'c' is uninitialized when used here [-Wuninitialized]
    scanf("%d%d%d",a,c,b);
                     ^
e156_271873.c:5:17: note: initialize the variable 'c' to silence this warning
    int a; int c; int b; 
                ^
                 = 0
e156_271873.c:6:20: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
    scanf("%d%d%d",a,c,b);
                   ^
e156_271873.c:5:10: note: initialize the variable 'a' to silence this warning
    int a; int c; int b; 
         ^
          = 0
e156_271873.c:6:24: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
    scanf("%d%d%d",a,c,b);
                       ^
e156_271873.c:5:24: note: initialize the variable 'b' to silence this warning
    int a; int c; int b; 
                       ^
                        = 0
6 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a; int c; int b; 
    scanf("%d%d%d",a,c,b);
    if (a*a+b*b==c*c){
        
        printf("Right Triangle");
    }
    else if(a*a+b*b>c*c){
        
        printf("Acute Triangle");
    }
    else if(a*a+b*b<c*c){
        printf("Obtuse Triangle");
    }
    
    else if (a+b<=c||b+c<=a||c+a<=b){
        
        printf("Invalid Triangle");
    }
    
    
    
  return 0;
}