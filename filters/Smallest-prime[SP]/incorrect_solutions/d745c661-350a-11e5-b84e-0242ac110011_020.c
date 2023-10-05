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
    for (i=2; i<num; i++) // defining a function to check integer
         { if(num%i==0)
          return 0;}
    return 1;
}
int main(){
int N;
   scanf("%d",&N); // scannig the input 
   
   if(N==1){
       printf("2"); 
       // special condition
   } 
   
   while(!check_prime(N)){   // using function
      N++;    
         }
    
        printf("%d",N); // printing the output
   
    return 0;
}