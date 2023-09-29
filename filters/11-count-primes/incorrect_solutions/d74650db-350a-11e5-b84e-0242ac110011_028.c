/*execute-result:OK*/
/*compile-errors:e158_278085.c:34:15: warning: unused variable 'count' [-Wunused-variable]
    int input,count=0;
              ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

//Complete function definitions

int check_prime(num){
    
    int state=0;
    
    if(num==2){
        return 1;
    }
    
    else{
        for(int i=2;i<num;++i){
            if(num%i==0){
                state++;
            }
        }
        
        if(state>0){
            return 0;
        }
        
        else{
            return 1;
        }
    }
}

int main(){
    
    int input,count=0;
    
    scanf("%d",&input);
    
    printf("%d",check_prime(5));
    
    return 0;
}