/*compile-errors:*/
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
    
    for(int i=0;i<input;++i){
        if(check_prime(i)==1 && check_prime(i+2)==1){
            count++;
            break;
        }
        
    }
    
    printf("%d",count);
    
    return 0;
}