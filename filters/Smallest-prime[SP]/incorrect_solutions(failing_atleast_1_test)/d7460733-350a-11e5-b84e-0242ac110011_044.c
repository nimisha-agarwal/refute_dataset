/*execute-result:OK*/
/*compile-errors:e158_278329.c:18:25: warning: more '%' conversions than data arguments [-Wformat]
               printf("%d");
                       ~^
e158_278329.c:25:14: warning: more '%' conversions than data arguments [-Wformat]
    printf("%d");
            ~^
2 warnings generated.*/
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
               printf("%d");
               break;
          }
          i++;
    }
    
    if(i==N)
    printf("%d");
    

    
    
    //Write your code here
    
    return 0;
}