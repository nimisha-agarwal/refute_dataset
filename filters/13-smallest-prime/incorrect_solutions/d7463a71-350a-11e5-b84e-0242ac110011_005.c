/*compile-errors:e158_278343.c:6:9: warning: unused variable 'a' [-Wunused-variable]
    int a=0;
        ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i;
    int a=0;
    for(i=2;i<=num-1;i++)
        {
            if(num%2==0)
            {
                return 0;
            }    
        }
        return 1;
    }
        
//Complete function definitions

int main(){
   int a,b,N;
   scanf("%d",&N);
   a=0;
   for(a=2;a>=N;a++)
   {
       b=check_prime(a);
   }
   printf("%d",b);
   return 0;
}