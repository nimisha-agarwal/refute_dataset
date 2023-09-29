/*compile-errors:e158_278085.c:17:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278085.c:19:1: warning: return type of 'main' is not 'int' [-Wmain-return-type]
void main(){
^
e158_278085.c:19:1: note: change return type to 'int'
void main(){
^~~~
int
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

//Complete function definitions

int check_prime(num){
    for(int i=0;i<num;++i){
        if(num%i==0){
            return 0;
        }
        else{
          return 1;  
        } 

    }
}

void main(){
    
    int input,count=0;
    
    scanf("%d",&input);
    
    for(int i=0;i<input;++i){
        if(check_prime(i)==0){
            if(check_prime(i+2)==0){
                count++;
            }
        }
    }
    
    printf("%d",count) ;
}