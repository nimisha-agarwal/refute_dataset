/*compile-errors:e158_278080.c:7:18: warning: expression result unused [-Wunused-value]
    for(i=2,n=2;i<sqrt(n),n<=num;i=i+1,n=n+1)
                ~^~~~~~~~
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>

int check_prime(int num)
{
    int i,n;
    for(i=2,n=2;i<sqrt(n),n<=num;i=i+1,n=n+1)
    {
        if((n%i)==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int N,a=0,i,j,p,q;
    scanf("%d",&N);
    for (i=2;i<=N;i=i+1)
    {
        p=check_prime(i);
    }
    for (j=i+2;j<=N;j++)
    {
        q=check_prime(j);
    }
    if((p==1)&&(q==1))
    {
        a=a+1;
    }
    printf("%d",a);
    return 0;
}