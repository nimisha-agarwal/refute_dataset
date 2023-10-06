/*execute-result:OK*/
/*compile-errors:e158_278321.c:17:5: warning: control may reach end of non-void function [-Wreturn-type]
    };
    ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
   
    int i;
    
       for(i=2;i<=num;i++){
            if((num%i)!=0){ 
                return num; break;
                }
             else{
                 num++; continue;
                }
        }
      
        
    };

//Complete function definitions

int main(){
    int N;
    scanf("%d",&N);
    int req_no=check_prime(N);
    printf("%d",req_no);
    
    
    return 0;
}