/*compile-errors:e158_278304.c:6:13: warning: unused variable 'j' [-Wunused-variable]
    int i=0,j;
            ^
e158_278304.c:4:21: warning: unused parameter 'num' [-Wunused-parameter]
int check_prime(int num)
                    ^
e158_278304.c:12:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
e158_278304.c:19:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",N);
           ~~  ^
e158_278304.c:19:16: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    scanf("%d",N);
               ^
e158_278304.c:18:10: note: initialize the variable 'N' to silence this warning
    int N;
         ^
          = 0
5 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int check_prime(int num)
{
    int i=0,j;
    while(i==1)
    {
        
    }
    
}

//Complete function definitions

int main(){
    
    int N;
    scanf("%d",N);
    
    
    return 0;
}