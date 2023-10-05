/*compile-errors:*/
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
    scanf("%d",&N);
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