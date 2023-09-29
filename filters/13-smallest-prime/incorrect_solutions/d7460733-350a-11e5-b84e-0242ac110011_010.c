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

    int p;
    p=2;
    for(i=p;i>=N;i++)
    {
          if(N%i==0)
          printf("not a prime number");
               
    }
     
         
    

    
    

    
    
    //Write your code here
    
    return 0;
}