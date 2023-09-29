/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

int check_prime(int num)
{
    int i,n=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        n++;
    }
    return n;
}

int main(){
    int N,i,a,b,count=0;
    scanf("%d",&N);
    for(i=2;i<N-1;i++)
    {
        a=check_prime(i);
        if(a==2)
        b=check_prime(i+2);
        if((a==2)&&(b==2))
        count++;
    }
    
    return 0;
}