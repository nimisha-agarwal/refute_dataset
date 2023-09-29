/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
int i,a;
a=0;
for(i=2;i<num;i++)
{
    if(num%i==0)
    {
    a=a+1;
    }
}
if(a>0)
{
    return 0;
}
else
{
    return 1;
}
}
//Complete function definitions

int main()
{
   int n,i,a;
   a=0;
   scanf("%d",&n);
   for(i=1;i<=n-2;i++)
   {
       if(check_prime(i)==1)
       {
       if(check_prime(i+2)==1)
       {
           a=a+1;
       }
       }
   }
   printf("%d",a);
}
    

    
    
    //Write your code here
    

