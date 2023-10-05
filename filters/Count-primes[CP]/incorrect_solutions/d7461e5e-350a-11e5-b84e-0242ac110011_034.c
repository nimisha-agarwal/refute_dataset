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
    int n,k,count=0;
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        k=check_prime(i);
        if(k==1)
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