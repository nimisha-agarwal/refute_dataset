/*compile-errors:e158_278364.c:30:17: warning: format specifies type 'int' but the argument has type 'int *' [-Wformat]
    printf("%d",&i);
            ~~  ^~
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int c=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        c++;
    }
    
    if(c==2)
    return 1;
    else 
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(int i=n;;i++)
    {
        int c=check_prime(i);
        if(c==1)
        break;
    }
    
    printf("%d",&i);
    
    
    return 0;
    
    
    
}