/*compile-errors:e158_278085.c:26:17: warning: variable 'count' is uninitialized when used here [-Wuninitialized]
                count++;
                ^~~~~
e158_278085.c:19:20: note: initialize the variable 'count' to silence this warning
    int input,count;
                   ^
                    = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

//Complete function definitions

int check_prime(num){
    for(int i=0;i<num;++i){
        if(num%i==0){
            return 0;
            break;
        }
    }
    return 1;
}

int main(){
    
    int input,count;
    
    scanf("%d",&input);
    
    for(int i=0;i<input;++i){
        if(check_prime(i)==0){
            if(check_prime(i+2)==0){
                count++;
            }
        }
    }
    
    printf("%d",count);
    
    //Write your code here
    
    return 0;
}