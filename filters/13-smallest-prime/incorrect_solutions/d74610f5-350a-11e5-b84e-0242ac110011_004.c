/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){

    int i,t;
    int k = 0;
    for(i=2;i<num;i++){
        t = ((num%i)!=0)?1:0;
        k = k+t;
    }
    if (k==(num-2))return 1;
    else return 0;
}
int main(){
    
    printf("%d",check_prime(101));
    
    return 0;
}