/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
/*code to find prime no >= N*/
int check_prime(int num) 
{                        //function to check if a no is prime or not
    int j=2;
    if (num==1)          //condition for 1
    return 0;
    while (j<=num-1)
    {
        if (num%j==0)    //condition for non-prime no
        return 0;
        j=j+1;
    } 
    return 1;
} 

int main(){
    int N,i;
    scanf ("%d",&N);
    i=N;
    while (i>=N)        //condition for finding a prime no >= N
    {
        if (check_prime(i))
        break;
        i=i+1;
    }
    printf ("%d",i);
    return 0;
}