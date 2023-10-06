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
e156_271873.c:5:12: note: initialize the variable 'c' to silence this warning
    int a,c,b;
           ^
            = 0
e156_271873.c:6:20: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
    scanf("%d%d%d",a,c,b);
                   ^
e156_271873.c:5:10: note: initialize the variable 'a' to silence this warning
    int a,c,b;
         ^
          = 0
e156_271873.c:6:24: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
    scanf("%d%d%d",a,c,b);
                       ^
e156_271873.c:5:14: note: initialize the variable 'b' to silence this warning
    int a,c,b;
             ^
              = 0
6 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,c,b;
    scanf("%d%d%d",a,c,b);
    if (a^2+b^2==c^2){
        
        printf("Right Triangle");
    }
    else if(a^2+b^2>c^2){
        
        printf("Acute Triangle");
    }
    else if(a^2+b^2<c^2){
        printf("Obtuse Triangle");
    }
    
    else if (a+b<=c||b+c<=a||c+a<=b){
        
        printf("Invalid Triangle");
    }
    
    
    
  return 0;
}