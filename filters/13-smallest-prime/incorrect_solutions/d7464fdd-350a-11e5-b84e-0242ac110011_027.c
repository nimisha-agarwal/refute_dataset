/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);


int main()
{   int N;
    scanf("%d",&N);
    int x=check_prime(N);//called a function check_prime
    printf("%d",x);
    return 0;
}
int check_prime(int num)
{   int N;
    for(N=num;N<=72;N++)//check for no greater than and equal to N
    {
        for(int i=2;i<=N;i++)//check by / with less than and equal to N
        if(N%i==0) break;
        else
        continue;
    }return N;    
}