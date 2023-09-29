/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    if(num==2){return 0;}
    else {
        int i;
        for(i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
       
        }
        return 1;
    }
}




     int main() {
       printf("%d",check_prime(3));

    return 0;
}