/*compile-errors:e158_278348.c:9:9: warning: unused variable 'x' [-Wunused-variable]
    int x=check_prime(N);
        ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);


int main()
{   int N;
    scanf("%d",&N);
    int x=check_prime(N);
    return 0;
}
int check_prime(int num)
{   int N;
    for(N=num;;N++)
    {
        for(int i=2;i<=N;i++)
        if(N%i==0&&N==i)
        printf("%d",N);
        else break;
        
    }    
}