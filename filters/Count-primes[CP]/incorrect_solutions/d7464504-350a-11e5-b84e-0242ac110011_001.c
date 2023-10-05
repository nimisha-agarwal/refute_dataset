/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i,x;
    for(i=2; i<num; i++){
        if(num%i==0){
            x=-1;
            break;
        }else{
            x=i;
        }
    }
    return x+1;
}

//Complete function definitions

int main(){
    int num;
    scanf("%d",&num);
    printf("%d",check_prime(num));
    return 0;
}