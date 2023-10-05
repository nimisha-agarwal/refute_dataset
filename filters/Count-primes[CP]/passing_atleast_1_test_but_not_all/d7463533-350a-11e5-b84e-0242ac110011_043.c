/*compile-errors:e158_278080.c:7:18: warning: expression result unused [-Wunused-value]
    for(i=2,n=2;i<sqrt(n),n<=num;i=i+1,n=n+1)
                ~^~~~~~~~
e158_278080.c:18:17: warning: unused variable 'j' [-Wunused-variable]
    int N,a=0,i,j,p,q;
                ^
e158_278080.c:18:21: warning: unused variable 'q' [-Wunused-variable]
    int N,a=0,i,j,p,q;
                    ^
3 warnings generated.*/
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
    for (i=2;i<=N-2;i=i+1)
    {
        p=check_prime(i) && check_prime(i+2);
        if(p==1)
        {
            a=a+1;
        }
    }
    printf("%d",a);
    return 0;
}