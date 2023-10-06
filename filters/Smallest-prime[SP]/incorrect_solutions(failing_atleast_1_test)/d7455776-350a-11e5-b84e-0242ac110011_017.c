/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int check_prime(int num)
{
    int i,j=0;
    if (num==1)
    return 0;
    else  if (num==2)
    return 1;
    else 

    {for (i=2; i<=num/2; i++)

   {if (num%i==0)
   {j=1;
    break ;}}
    if (j==1)
    return 0;
    else 
    return 1; }

    
}


int main(){
    
   int N,p;

   scanf ("%d",&N);
   p=N+1;
   if (check_prime(N)==0)
{
   if (check_prime(N)==1)
   printf ("%d",N);

   return 0;
}
}