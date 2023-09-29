/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
for(int i=2;i<num ;i++)
   {
      if(num%i==0)break;
      
     else
      return num;
         
   }
   for(int j=num+1; ;j++)
        for(int k=1;k<=j;k++)
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
    int r=check_prime(n);
    printf("%d",r);
    return 0;
}