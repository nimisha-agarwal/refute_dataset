/*execute-result:OK*/
/*compile-errors:e158_278332.c:24:13: warning: unused variable 'pr' [-Wunused-variable]
    int n,i,pr;
            ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

int check_prime(int num)
{
    int i,ch=1;
    for (i=2;i<=num/2;i++)
    {
        if ( (num % i) == 0 )
        {
            ch=0;
            break;
        }
    }
    if (ch==0)
        return 0;
    else 
        return 1;
}

int main(){
    
    int n,i,pr;
    scanf("%d",&n);
    i=n;
    while( 1 )
    {
        if( check_prime(i) == 1)
        {
            printf("%d",i);
            break;
        }
        i++;
    }
    return 0;
}