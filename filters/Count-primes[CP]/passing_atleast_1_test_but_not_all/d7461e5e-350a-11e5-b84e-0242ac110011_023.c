/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int m=1;
    for(int i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            m=0;
            return m;
        }
    }
    return m;
}

int main(){
    int n,count=0;
    scanf("%d",&n);
    for(int i=5;i<=n-2;i++)
    {
        if(check_prime(i))
        {
            if(check_prime(i+2))
            {
                count=count+1;
            }
        }
    }
    printf("%d",count);
    return 0;
}