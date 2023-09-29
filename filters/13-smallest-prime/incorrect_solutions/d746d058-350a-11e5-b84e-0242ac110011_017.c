/*compile-errors:e158_278367.c:19:13: warning: variable 'p' is used uninitialized whenever function 'main' is called [-Wsometimes-uninitialized]
    int i,N,p;
    ~~~~~~~~^
e158_278367.c:21:16: note: uninitialized use occurs here
    for(i=N;i<=p;i++)
               ^
e158_278367.c:19:14: note: initialize the variable 'p' to silence this warning
    int i,N,p;
             ^
              = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
 { for(int i=2;i<num;i++)
  {
    if((num%i)==0){
    int nprime=num;
       return nprime;
    }
    else{
        int prime=num;
        return prime;
        }
    }
    return 0;
 }
   
int main(){
    int i,N,p;
    scanf("%d",&N);
    for(i=N;i<=p;i++)
      {
       p=check_prime(i); 
      }
    printf("%d",i);
    return 0;
}