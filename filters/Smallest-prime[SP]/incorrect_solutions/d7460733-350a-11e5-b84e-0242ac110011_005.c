/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

//Complete function definitions

int main()
{
    int N,i;
    printf("N");
    scanf("%d",&N);
    
    i=2;
    while (i<=N-1)
    {
          if(N%i==0)
          {
               printf("Not a prime number");
               break;
          }
          i++;
    }
    
    if(i==N)
    printf("Prime number");
    

    
    
    //Write your code here
    
    return 0;
}