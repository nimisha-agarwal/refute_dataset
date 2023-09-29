/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i;
    i=0;
    for(i=2;i>=num;i++)
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
       p=check_prime(a);
   }
   printf("%d",p);
   return 0;
}