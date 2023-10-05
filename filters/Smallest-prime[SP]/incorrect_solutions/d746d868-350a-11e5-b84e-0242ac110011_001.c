/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    for(int i=2;i<num;i++)
    if(num%i==0)
    {
    return 0;
    }
    return 1;
}
int main()
{
    int N,p,m;
    scanf("%d",&N);
    p=N;
    while(p>=N)
    {
        m = check_prime(p);
        p++;
        if(m==1) break;
    }
    printf("%d",p);
    return 0;
}