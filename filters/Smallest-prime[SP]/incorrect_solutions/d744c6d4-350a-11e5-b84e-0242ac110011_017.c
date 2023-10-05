/*execute-result:OK*/
/*compile-errors:e158_278276.c:5:11: warning: unused variable 'j' [-Wunused-variable]
    int i,j;
          ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,j;
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1 ;
}

int main()
{
    int a,b;
    scanf("%d",&a);
    b=check_prime(a);
    if(b==1)
    {
        printf("%d",a);
    }
    
    return 0;
}