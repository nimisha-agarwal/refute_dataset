/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
int i;
    for(i=2;i<=num-1;i++){
        if (num%i==0){
            return 0;
        }
        else continue;
    }
    return 1;
}
int main(){
    
    //Write your code here
    
    return 0;
}