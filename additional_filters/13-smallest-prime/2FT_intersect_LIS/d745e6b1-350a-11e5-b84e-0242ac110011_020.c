/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
   int i,N;
   N=num;
   for(i=2;i<=N-1;i++)
   {
       if(N%i==0)
       return 0;
   }
   
   return 1;
}
int main()
{
    int N;
    scanf("%d",&N);
    while(!check_prime(N))
    N=N+1;
    printf("%d",N);
  return 0;
}