/*execute-result:TL*/
/*compile-errors:e158_278367.c:23:11: warning: multiple unsequenced modifications to 'N' [-Wunsequenced]
       N=N++ ;
        ~ ^
e158_278367.c:21:27: warning: variable 'prime' is uninitialized when used here [-Wuninitialized]
    while(check_prime(N)==prime)
                          ^~~~~
e158_278367.c:19:16: note: initialize the variable 'prime' to silence this warning
    int N,prime;
               ^
                = 0
2 warnings generated.*/
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
    int N,prime;
    scanf("%d",&N);
    while(check_prime(N)==prime)
      {
       N=N++ ;
      }
    printf("%d",N);
    return 0;
}