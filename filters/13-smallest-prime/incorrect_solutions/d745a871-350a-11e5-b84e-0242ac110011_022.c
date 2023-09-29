/*compile-errors:e158_278321.c:5:10: warning: variable 'p' is used uninitialized whenever 'if' condition is false [-Wsometimes-uninitialized]
      if(num==1 || num==2){
         ^~~~~~~~~~~~~~~~
e158_278321.c:10:15: note: uninitialized use occurs here
        while(p==0)
              ^
e158_278321.c:5:7: note: remove the 'if' if its condition is always true
      if(num==1 || num==2){
      ^~~~~~~~~~~~~~~~~~~~
e158_278321.c:4:16: note: initialize the variable 'p' to silence this warning
    int i,c=0,p;
               ^
                = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i,c=0,p;
      if(num==1 || num==2){
          return 2;
      }
      else
      {
        while(p==0)
        {
          for(i=2;i<=num-1;i++)
          { 
              if((num%i)!=0)
              { c++;
              }
          }
          if(c==num-1)
          {
              p=num;
          }
          else
          {
              num++;
          }
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