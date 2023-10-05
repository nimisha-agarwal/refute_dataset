/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,d;
    d=0;
    for(i=2;i<=(num/2);i++)
    {
        if(num%i==0)
            d=1;break;
            
    }
    return d;
}
int main()
{
    int N,i;
    scanf("%d",&N);
    i=N;
    while(i>=N)
    {
        if(check_prime(i)==1)
          break;
        i++;  
    }
    return 0;
}