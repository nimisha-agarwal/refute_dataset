/*execute-result:TL*/
/*compile-errors:e158_278089.c:18:16: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    for(j=3;j<=N-2;j=j+1){
               ^
e158_278089.c:17:10: note: initialize the variable 'N' to silence this warning
    int N,j,count;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){

int i;
    for (i=2;i<=num-1;i=i+1){
    if(num%i==0){
        return 0 ;
    }
    else{continue ;
}
    }
    return 1;}
//Complete function definitions

int main(){
    int N,j,count;
    for(j=3;j<=N-2;j=j+1){
    if(check_prime(j)==1&&check_prime(j+2)==1){
    count=count+1;
        
    }
    else{printf("0");
    }
        
    }
    //Write your code here
    
    return 0;
}