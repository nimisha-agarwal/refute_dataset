/*execute-result:OK*/
/*compile-errors:*/
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
 scanf("%d",&N);
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