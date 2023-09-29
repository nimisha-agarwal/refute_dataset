/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,flag=1;
    for (i=2;i<num;i++)
    {
        if (num%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}

int main()
{
    int N,i,count=0;
    scanf("%d", &N);
    for (i=1;i<=N-2;i++)
    {
        if (check_prime(i)==1&&check_prime(i+2)==1)
        count++;
    }
    printf("%d", count);
    return 0;
}