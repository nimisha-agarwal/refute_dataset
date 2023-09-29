/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
           return 0;
    }
    return 1;
}

int main()
{
    int N,i,j=0;
    scanf("%d",&N);
    for(i=2;i<=N;i++)
    {
        if(check_prime(i) && check_prime(i+2))
        {
            j++;
        }
    }
    printf("%d",j);

    return 0;
}