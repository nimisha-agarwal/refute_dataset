/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
int t;
for(int i=2;i<=(num/2);++i){
    if(num%i==0){
        t=1;
        
    }
    else {
        t=0;
    }
}
if(t==1){return 1;}
else {return 0;}
}      //defining of the function to check primes

int main(){
    int N;
    scanf("%d",&N); //taking input
    int count=0;
    int p;
    for(p=3;p<=N-2;p=p+2){
        if(check_prime(p)==0 && check_prime(p+2)==0){
            count=count+1;
        } //if p=prime then add counter
    }
    printf("%d",count); //printing the output
    
    return 0;
}