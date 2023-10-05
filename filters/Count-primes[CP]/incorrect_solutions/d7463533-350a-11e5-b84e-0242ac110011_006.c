/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>

int check_prime(int num)
{
    int i=2,n=2;
    int a=sqrt(n);
    for(i=2;i<=a;i=i+1)
    {
        if((num%i)==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int N,a=0,i,p;
    scanf("%d",&N);
    for (i=3;i<=N-2;i=i+1)
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