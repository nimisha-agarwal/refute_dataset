/*execute-result:OK*/
/*compile-errors:e158_278338.c:9:11: warning: unused variable 'count' [-Wunused-variable]
    int i,count=0;
          ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    if(num==1)
    {
        return 1;
    }
    int i,count=0;
    for(i=2;i<=(num/2);i++)
    {
        if((num%i)==0)
        return 0;
        break;
    }
    return 1;
}

int main()
{
    int num,x;
    scanf("%d",&num);
    x=check_prime(num);
    if(x==1)
    { printf("prime");
        
    }
    else
    printf("nonprime");
    return 0;
}