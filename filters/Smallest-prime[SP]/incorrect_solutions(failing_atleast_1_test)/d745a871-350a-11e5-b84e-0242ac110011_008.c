/*execute-result:TL*/
/*compile-errors:e158_278321.c:16:5: warning: control may reach end of non-void function [-Wreturn-type]
    };
    ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i=1,p=0;
      while(p==0){
        do{
            if((num%i)!=0){ 
                p=num;
                return p; break;
                }
           i++;            
           }
        while(i<=num);
        num++;
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