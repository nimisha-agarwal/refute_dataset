/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>

/*defining the function to check prime numbers*/
int check_prime(int num)
  {
   int i,r;
    for(i=2;i<=sqrt(num);i++)//method of finding the prime no
        {    r=num%i;//if 'num' is a prime r!=0 ALWAYS
            if (r!=0)
            continue;
            else 
            return 0;//0 will be used in bullion
        }
  return 1;//1 will be used in bullion
  }
  
  
  
int main ()
{ int count=0;
   int p;//represents the prime less than n
   int n;//the given no.
   scanf("%d",&n);
   for(p=2;(p+2<n);p++)
      {
/*the upcoming expression will act as a test to find if 'p' and 'p+2' are both prime or not*/
        if(check_prime(p)&&check_prime(p+2))
        {count=count+1;}
        else 
        {continue;}
      }
       printf("%d",count);
 
}