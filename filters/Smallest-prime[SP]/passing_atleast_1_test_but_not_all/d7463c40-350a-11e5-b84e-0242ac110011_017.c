/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i;
    for(i=2;i<num;++i)
    {
        if ((num%i)==0)
        {
        return 0;
        }
    }
    return 1;
}

int main()
{
    int N,i;
    scanf("%d",&N);
    for (i=N;i>=N;++i)
    {
        int b;
        b=check_prime(i);
        if (b==1)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}