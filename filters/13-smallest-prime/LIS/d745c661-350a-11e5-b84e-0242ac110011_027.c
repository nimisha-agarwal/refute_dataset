/*compile-errors:e158_278323.c:4:5: warning: unused variable 'N' [-Wunused-variable]
int N;
    ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
int N;
int i;
    for (i=2; i<num; i++)
         { if(num%i==0)
          return 0;}
    return 1;
}
int main(){
int N;
   scanf("%d",&N);
   if(N==1){
       printf("2");
   }
   
   while(!check_prime(N)){
      N++;
         }
    
        printf("%d",N);
    
    return 0;
}