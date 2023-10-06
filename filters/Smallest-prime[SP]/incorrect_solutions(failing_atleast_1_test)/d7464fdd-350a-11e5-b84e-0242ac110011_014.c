/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);


int main()
{   int N;
    scanf("%d",&N);
    int x=check_prime(N);
    printf("%d",x);
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