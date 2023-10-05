/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>
int check_prime(int num){
    int i;
    for(i=2;i<=sqrt(num);i++){
        if(num%i==0)
        return 0;
        
        
    }
    return 1;
}



//Complete function definitions

int main(){
    int i,k;
    scanf("%d", &k);
    for(i=k;i<=k*k;i++){
        if(check_prime(i)){
            break;
        }
        
    }
    printf("%d", i);
    //Write your code here
    
    return 0;
}