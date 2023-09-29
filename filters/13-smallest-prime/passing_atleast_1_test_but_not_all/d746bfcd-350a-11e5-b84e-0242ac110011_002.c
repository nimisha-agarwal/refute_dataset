/*compile-errors:e158_278359.c:9:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
e158_278359.c:15:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",N);
           ~~  ^
e158_278359.c:15:16: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    scanf("%d",N);
               ^
e158_278359.c:14:10: note: initialize the variable 'N' to silence this warning
    int N;
         ^
          = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){

   while(num%2==0||num%3==0||num%5==0){
   num=num+1;
   printf("%d",num);
}
}
   

int main(){
    
    int N;
    scanf("%d",N);
    check_prime(N);
    
    return 0;
}