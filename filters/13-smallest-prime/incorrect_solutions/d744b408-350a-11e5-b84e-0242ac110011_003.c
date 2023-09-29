/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
for(int i=2;i<=num ;i++)
   {
      if(num%i==0)break;
      
         
   }
   for(int j=num;;j++)
        for(int k=2;k<=j;k++)
      {    
          if(j%k==0)break;
          else 
          return j;
      }
}

int main()
{
    int n;
    scanf("%d",&n);
    check_prime(n);
    printf("%d",n);
    return 0;
}