/*compile-errors:e158_278343.c:25:12: warning: unused variable 'p' [-Wunused-variable]
       int p=check_prime(a);
           ^
e158_278343.c:27:16: warning: variable 'p' is uninitialized when used here [-Wuninitialized]
   printf("%d",p);
               ^
e158_278343.c:20:11: note: initialize the variable 'p' to silence this warning
   int a,p,N;
          ^
           = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,a;
    a=0;
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
   int a,p,N;
   scanf("%d",&N);
   a=0;
   for(a=2;a>=N;a++)
   {
       int p=check_prime(a);
   }
   printf("%d",p);
   return 0;
}