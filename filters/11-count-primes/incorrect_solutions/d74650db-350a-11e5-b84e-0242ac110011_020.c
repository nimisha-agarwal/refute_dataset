/*execute-result:AT*/
/*compile-errors:e158_278085.c:26:1: warning: return type of 'main' is not 'int' [-Wmain-return-type]
void main(){
^
e158_278085.c:26:1: note: change return type to 'int'
void main(){
^~~~
int
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

//Complete function definitions

int check_prime(num){
    
    int state=0;
    
    for(int i=0;i<num;++i){
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

void main(){
    
    int input,count=0;
    
    scanf("%d",&input);
    
    printf("%d",check_prime(2));
    
    
    
    printf("%d",count) ;
}