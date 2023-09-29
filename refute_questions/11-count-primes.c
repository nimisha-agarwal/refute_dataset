// source: ⁨refute_dataset⁩//c_data⁩//11-count-primes⁩//d74617f4-350a-11e5-b84e-0242ac110011_008.c
// Edits: added comments, adjusted braces and changed a variable name to make the program more readable.


#include<stdio.h>

// the check_prime function takes an integer num as input and returns 1 if it is a prime and 0 otherwise.
int check_prime(int num)
{
    int i;
    for(i=2;i<num;i++)
        if(num%i==0)
           return 0;

    return 1;
}

int main()
{
    int N,i,j=0;
    scanf("%d",&N);
    for(i=2;i<=N;i++)
        if(check_prime(i) && check_prime(i+2))
            j++;
    
    printf("%d",j);

    return 0;
}