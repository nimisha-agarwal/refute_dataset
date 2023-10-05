/*compile-errors:e158_278343.c:19:10: warning: unused variable 'p' [-Wunused-variable]
   int a,p,N;
         ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,j;
    i=0;
    j=1;
        for(i=2;i<=num;i++)
        {
            if((num%i==0))
            {
                j=0;
                break;
            }
            }
        return j;    
}
int main(){
   int a,p,N;
   scanf("%d",&N);
   a=0;
    if(N==1)
    printf("2");
   while(a==0)
   {
   if(check_prime(N))
   {
       printf("%d",N);
       a=1;
   }
    else
    N=N+1;
   }
   return 0;
}