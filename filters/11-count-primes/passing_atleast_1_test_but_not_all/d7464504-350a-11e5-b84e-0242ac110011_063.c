/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i,x;
    for(i=1; i<num; i++){
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
    int N;
    scanf("%d", &N);
    
    int i;
    int count=0;
        for(i=4;i<=N;i++){
        if(2==(check_prime(i)-check_prime(i-2))){
            count++;
        }
            
        }
    printf("%d",count);
    return 0;
}