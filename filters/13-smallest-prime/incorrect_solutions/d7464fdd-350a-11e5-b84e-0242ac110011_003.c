/*compile-errors:e158_278348.c:21:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
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
    for(N=num;N<=50;N++)//check for no greater than and equal to N
    {
        for(int i=2;i<=N;i++)//check by / with less than and equal to N
        if(N%i==0)continue;
        else printf("%d",N);
    }    
}