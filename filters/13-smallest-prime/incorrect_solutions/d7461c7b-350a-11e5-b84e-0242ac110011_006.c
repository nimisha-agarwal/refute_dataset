/*compile-errors:e158_278338.c:10:11: warning: unused variable 'count' [-Wunused-variable]
    int i,count=0;
          ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int j=1;
    if(num==1)
    {
        return 1;
    }
    int i,count=0;
    for(i=2;i<=(num/2);i++)
    {
        if((num%i)==0)
        j=0;
        break;
    }
    return j;
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