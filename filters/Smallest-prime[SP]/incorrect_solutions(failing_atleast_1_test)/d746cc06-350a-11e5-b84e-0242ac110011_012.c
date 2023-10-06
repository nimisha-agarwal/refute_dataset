/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int cnt=0,i;
    for(i=1;i<=num;i++)
    {
        if((num%i)==0)
        cnt++;
    }
    if(cnt==2)
    return 1;
    else
    return 2 ;
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

int main()
{ 
    int N,p;
    scanf("%d",&N);
    p=check_upper(N);
    printf("%d",p);
    
    
    return 0;
}