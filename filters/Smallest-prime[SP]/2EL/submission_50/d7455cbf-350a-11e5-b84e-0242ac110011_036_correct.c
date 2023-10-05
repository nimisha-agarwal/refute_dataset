/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int a=0,b;
    if (num==1)
    return 1;
    else if(num==2)
    return 0;
    else 
    {
        for(b=2;b<=(num/2);b++)
        {
            if(num%b==0)
            {
                a=1;
                break;
            }
        }
        if(a==1)
        return 1;
        else 
        return 0;
    }
}
int main()
{
    int N,p;
    scanf("%d",&N);
    p=N;
    while (p>=N)
    {
        if( check_prime(p)==0)
    {
        printf("%d",p);
        break;
        
    }
    else
    p++;
        
    }

    return 0;
}