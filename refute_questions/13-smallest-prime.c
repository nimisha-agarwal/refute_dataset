// source: refute_dataset⁩/c_data⁩/13-smallest-prime⁩/fft_intersect_lis_intersect_2eb⁩/d744ce82-350a-11e5-b84e-0242ac110011_027.c

#include<stdio.h>
int check_prime(int num)
{
    int j=2;
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