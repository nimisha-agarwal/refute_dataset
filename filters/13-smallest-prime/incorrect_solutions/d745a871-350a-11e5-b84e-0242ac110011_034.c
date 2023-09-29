/*execute-result:OK*/
/*compile-errors:e158_278321.c:7:15: warning: variable 'p' is used uninitialized whenever 'for' loop exits because its condition is false [-Wsometimes-uninitialized]
      for(i=2;i<=n-1;i++){
              ^~~~~~
e158_278321.c:15:12: note: uninitialized use occurs here
    return p;
           ^
e158_278321.c:7:15: note: remove the condition if it is always true
      for(i=2;i<=n-1;i++){
              ^~~~~~
e158_278321.c:4:10: note: initialize the variable 'p' to silence this warning
    int p;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int p;
    int i;
    int n=num;
      for(i=2;i<=n-1;i++){
            if(n%i==0){ 
                p=n; break;
                }
             else{
                 n++; continue;
                }
        }
    return p;
   };

//Complete function definitions

int main(){
    int N;
    scanf("%d",&N);
    int req_no=check_prime(N);
    printf("%d",req_no);
    
    
    return 0;
}