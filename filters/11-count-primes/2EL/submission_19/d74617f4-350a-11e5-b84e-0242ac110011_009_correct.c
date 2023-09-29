/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i;
    for(i=2;i<num;i++)//checking for prime numbers
    {
        if(num%i==0)
           return 0; //returning 0(false) if not prime
    }
    return 1;        //returning 1(true) if prime
}

int main()
{
    int N,i,j=0;
    scanf("%d",&N);
    for(i=2;i<N-1;i++)// N-1 because in if i'm using i+2
    {
        if(check_prime(i) && check_prime(i+2))//twin primes
        {
            j++;
        }
    }
    printf("%d",j);

    return 0;
}