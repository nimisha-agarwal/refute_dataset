/*compile-errors:e158_278367.c:24:11: warning: multiple unsequenced modifications to 'i' [-Wunsequenced]
       i=i++ ;
        ~ ^
e158_278367.c:22:27: warning: variable 'prime' is uninitialized when used here [-Wuninitialized]
    while(check_prime(i)==prime)
                          ^~~~~
e158_278367.c:19:16: note: initialize the variable 'prime' to silence this warning
    int N,prime;
               ^
                = 0
e158_278367.c:20:11: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    int i=N;
          ^
e158_278367.c:19:10: note: initialize the variable 'N' to silence this warning
    int N,prime;
         ^
          = 0
3 warnings generated.*/
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
    int i=N;
    scanf("%d",&N);
    while(check_prime(i)==prime)
      {
       i=i++ ;
      }
    printf("%d",i);
    return 0;
}