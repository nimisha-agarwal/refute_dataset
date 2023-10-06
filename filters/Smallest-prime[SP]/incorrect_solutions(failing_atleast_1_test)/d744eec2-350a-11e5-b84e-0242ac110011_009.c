/*execute-result:OK*/
/*compile-errors:e158_278283.c:19:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",n);
           ~~  ^
e158_278283.c:19:16: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    scanf("%d",n);
               ^
e158_278283.c:18:10: note: initialize the variable 'n' to silence this warning
    int n;
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

//Complete function definitions

int main(){
    int n;
    scanf("%d",n);
    if (check_prime(n)==1) {
        printf("YES");
    } else {
        printf("no");
    }
    
    //Write your code here
    
    return 0;
}