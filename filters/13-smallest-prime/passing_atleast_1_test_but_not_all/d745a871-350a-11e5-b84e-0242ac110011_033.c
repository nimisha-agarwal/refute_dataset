/*compile-errors:e158_278321.c:16:14: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
         if(c=num+1){
            ~^~~~~~
e158_278321.c:16:14: note: place parentheses around the assignment to silence this warning
         if(c=num+1){
             ^
            (      )
e158_278321.c:16:14: note: use '==' to turn this assignment into an equality comparison
         if(c=num+1){
             ^
             ==
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
               if((num%i)!=0){ 
                   c++;
                }
                
            }   
         if(c=num+1){
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