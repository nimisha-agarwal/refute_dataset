/*execute-result:OK*/
/*compile-errors:e158_278329.c:10:14: warning: more '%' conversions than data arguments [-Wformat]
    printf("%d");
            ~^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

//Complete function definitions

int main()
{
    int N,i;
    printf("%d");
    scanf("%d",&N);
    
    i=2;
    while (i>=N)
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