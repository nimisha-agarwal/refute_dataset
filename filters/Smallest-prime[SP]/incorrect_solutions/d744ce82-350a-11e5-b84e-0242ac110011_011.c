/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int j=2;
    if (num==1)
    return 1;
    while (j<=num-1)
    {
        if (num%j==0)
        return 0;
        j=j+1;
    } 
    return 1;
} 

int main(){
    int N,i;
    scanf ("%d",&N);
    i=N;
    while (i>=N)
    {
        if (check_prime(i))
        break;
        i=i+1;
    }
    printf ("%d",i);
    return 0;
}