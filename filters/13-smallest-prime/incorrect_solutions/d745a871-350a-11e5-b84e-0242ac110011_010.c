/*compile-errors:e158_278321.c:4:17: warning: unused variable 'c' [-Wunused-variable]
    int i=2,p=0,c=0;
                ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i=2,p=0,c=0;
      if(num==1 || num==2){
          return 2;
      }
      else{
       while(p==0){
            while(i<=num-1){
               if((num%i)==0){ 
                   break;
                }
            }    
            if(i==num+1){
                  p=num; break;
            }
            num++;    
        }   
      return p;
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