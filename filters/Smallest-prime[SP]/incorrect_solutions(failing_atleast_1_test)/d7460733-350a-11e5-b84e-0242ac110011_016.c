/*compile-errors:e158_278329.c:10:14: warning: more '%' conversions than data arguments [-Wformat]
    printf("%d");
            ~^
e158_278329.c:14:11: warning: variable 'p' is uninitialized when used here [-Wuninitialized]
    for(i=p;i>=N;i++)
          ^
e158_278329.c:13:10: note: initialize the variable 'p' to silence this warning
    int p;
         ^
          = 0
2 warnings generated.*/
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
    for(i=p;i>=N;i++)
    {
          if(N%i==0)
          printf("not a prime number");
               
    }
     
         
    

    
    

    
    
    //Write your code here
    
    return 0;
}