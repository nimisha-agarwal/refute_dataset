/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i;
    for(i=2; i<num; i++){
        if(num%i==0){
            break;
        }
    }
    return i+1;
}

//Complete function definitions

int main(){
    int a;
    scanf("%d",&a);
    printf("%d",check_prime(a));
    return 0;
}