/*execute-result:OK*/
/*compile-errors:e158_278329.c:10:17: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    printf("%d",N);
                ^
e158_278329.c:9:10: note: initialize the variable 'N' to silence this warning
    int N,i;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

//Complete function definitions

int main()
{
    int N,i;
    printf("%d",N);
    scanf("%d",&N);
    
    i=2;
    while (i>=N+1)
    {
          if(N%i==0)
          {
               printf("%d",N);
               break;
          }
     
          i++;
    }
    
    if(i==N)
    printf("%d",N);
    

    
    
    //Write your code here
    
    return 0;
}