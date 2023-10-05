/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    if(num==1){return 0;}           // 1 is not prime 
    else {
        int i;
        for(i=2;i<num;i++){
        if(num%i==0){
            return 0;               // prime number is not divisible by any other integer except 1 and itself 
        }
    }
    return 1;                       // function will reach this point if it prime
    }
}

int main() {
    
    int N, i;                       // n is input number
    scanf("%d",&N);
    
    for(i=N;;i++){
        if(check_prime(i)==1){     //checks all numbers greater than or equal to the input until a prime number is reached
            printf("%d",i);        // prints only the first prime it encounters
            break;
                
    return 0;
        }
    }
}