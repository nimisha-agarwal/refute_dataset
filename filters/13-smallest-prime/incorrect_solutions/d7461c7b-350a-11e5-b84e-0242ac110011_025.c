/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int j=1;
    int i;
    for(i=2;i<=(num-1);i++)
    {
        if((num%i)==0)
        {   
            j=0;
            break;
        }
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