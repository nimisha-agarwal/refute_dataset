/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>
int n;
int check_prime(int num)
  {
      int i,r;
   for(i=2;i<=sqrt(num);i++)
   {   r=num%i;
       if (r!=0)
       continue;
       else 
       {return 0;}
     
   }
     return 1;
  }
  
int main ()
{ int count=0;
   int p;
   for(p=2;(p+2<n);p++)
      {
        if(check_prime(p)&&check_prime(p+2))
        {count=count+1;}
        else 
        {continue;}
      }
      printf("%d",count);
 
}