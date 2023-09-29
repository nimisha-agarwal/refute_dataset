/*compile-errors:e158_278283.c:18:13: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
 scanf("%d",N);
        ~~  ^
e158_278283.c:18:13: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
 scanf("%d",N);
            ^
e158_278283.c:17:7: note: initialize the variable 'N' to silence this warning
 int N;
      ^
       = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i=2;
    while(i<num){
    if((num%i)==0){
        return 0;
    } else {
        i=i+1;
    }    
    } return 1;
    
}


int main(){
 int N;
 scanf("%d",N);
 if(check_prime(N)==1) {
     printf("%d",N);
 } else {
     N=N+1;
     while(check_prime(N)==0){
         N=N+1;
     } printf("%d",N);
 }
    
return 0;
}