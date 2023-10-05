/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{int a;
 if(num==1)              //returning 1 if num=1 since 1 is not
 return 1;               //a prime number
 for(a=2;a<=num/2;a++)   
 {if(num%a==0)           //checking for prime number
  return 1;              //returning for non prime number
 }
  return 0;              //returning for prime number
}  

int main(){
    int N,c,p;           //declaration of variables
    scanf("%d",&N);      //inputting N
    for(p=N;;p++)        //loop for checking smallest prime number
    {c=check_prime(p);   //greater than or equal to N
     if(c==0)            //checking if p is prime or not
     break;
    }
    printf("%d",p);      //printing output
    return 0;
}