/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include <math.h>
int check_prime(int num)   /*This function is to check if the given                               number is prime*/
{                      
int t,b;
int isprime=1;
for(t=2;t<=sqrt(num);t=t+1)/*Check divisibilty till root of that number                            to avoid repititive steps and increase speed                            */
    {
     b=num%t;
     if(b==0)
     {
      isprime=0;           /*If the number is divisible by even one                               number till root n then it won't be prime,so                            break the loop.*/
      break;
     }
    }
return isprime;
}
    int main() {
    int N,i;
    int count=0;
    scanf("%d",&N);
    for(i=2;i<=N-2;i=i+1)
    {
        if(check_prime(i)&&check_prime(i+2)) 
                          /*Check for prime nature of any two numbers                            differing by 2 till input.*/
        count=count+1;
    }                     
    printf("%d",count);   /*Print the final number of coprimes*/
    return 0;
}