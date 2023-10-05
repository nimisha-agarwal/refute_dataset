/*execute-result:OK*/
/*compile-errors:e158_278080.c:7:24: warning: expression result unused [-Wunused-value]
    for(i=2,n=2,j=n+2;i<sqrt(n),j<=num;i=i+1,n=n+1)
                      ~^~~~~~~~
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>

int check_prime(int num)
{
    int i,j,n;
    for(i=2,n=2,j=n+2;i<sqrt(n),j<=num;i=i+1,n=n+1)
    {
        if((n%i)||(j%i)==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int N,a=0,i;
    scanf("%d",&N);
    for (i=2;i<=N;i=i+1)
    {
        int p=check_prime(i);
        if (p==1)
        {
            a=a+1;
        }
    }
    printf("%d",a);
    return 0;
}