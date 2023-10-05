/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{   
    int prime=0,j=0,flag=1;
    for(prime=num;prime>=num;prime++)
    {   for(j=2;j<prime/2;j++)
        {
            if(prime%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            return prime;
    }
    return -1;
}

int main()
{
    int N=0,p=0;
    scanf("%d",&N);
    p=check_prime(N);
    printf("%d",p);
    return 0;
}