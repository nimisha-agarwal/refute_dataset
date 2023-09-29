/*execute-result:TL*/
/*compile-errors:e158_278315.c:8:2: warning: control reaches end of non-void function [-Wreturn-type]
}}
 ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int i,a;
int check_prime(int num){i=2;
    while(i<=num-1)
    {if (num%i!=0)
    {printf("%d",num);}
    else (num=num+1);
}}


int main()
{int N,k;
scanf("%d",&N);
for(k=N;k<=2*N;k++)
{check_prime(N);}
    
    return 0;
}