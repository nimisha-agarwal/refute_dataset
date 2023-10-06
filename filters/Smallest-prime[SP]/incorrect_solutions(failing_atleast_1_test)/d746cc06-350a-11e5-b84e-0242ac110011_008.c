/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int cnt=1,i;
    for(i=1;i<=num/2;i++)
    {
        if((num%i)==0)
        cnt++;
    }
    if(cnt==2)
    return 1;
    else
    return 2;
}

int check_upper(int num)
{
    int i;
    for(i=num;;i++)
    {
        if((check_prime(num))==1)
        break;
    }
    return i;
}

int check_lower(int num)
{
    int j;
    for(j=num;;j--)
    {
        if(check_prime(j)==1)
        break;
    }
    return j;
}

int main()
{ 
    int N,p,q;
    scanf("%d",&N);
    p=check_lower(N);
    q=check_upper(N);
    if((N-p)<(N-q))
    printf("%d",p);
    else
    printf("%d",q);
    
    
    return 0;
}