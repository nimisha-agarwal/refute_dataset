/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){/*defining a function for checking primes*/
    int i;
    int d=1;
       for(i=2;i<num;i=i+1){
           if(num%i==0){/*if no. divisible by any no. smaller than it except 1,no. is not prime*/
               d=0;break;}
       }
    return d;/*returning 1 if prime and 0 otherwise*/
}
int main(){
    int N,i;
     scanf("%d",&N);
    int count=0;
         for(i=3;i<=N-2;i=i+1){
             if(check_prime(i)&&check_prime(i+2)==1){/*and would give output 1 only if both statements true*/
                 count=count+1;/*incrementing count if test case passed*/
             }
         }
    printf("%d",count);         
 return 0;
}