/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
/*This program computes the number of twin primes
    less than a given number. */
    
#include <stdio.h>

int check_prime(int num) //function to check prime numbers
{
    int i,flag=1; //flag: to store 1 for prime, 0 otherwise
    if (num==1) //1 is neither prime nor composite.
    return 0;
    for (i=2;i<num;i++)
    {
        if (num%i==0) //if any number less than num divides num
        {
            flag=0; //if number is composite
            break; //further computation is unnecessary
        }
    }
    return flag; //returning value
}

int main()
{
    int N,i,count=0; //count: to count the number of primes
    scanf("%d", &N); //accepting input from user
    for (i=0;i<=N-2;i++)
    {
        if (check_prime(i)==1&&check_prime(i+2)==1)
        {
            count++; //if given pair has twin primes
        }
    }
    printf("%d", count); //output
    return 0;
}