/*execute-result:OK*/
/*compile-errors:e158_278344.c:17:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i;
    for(i=2;i<=num;++i)
    {
        if ((num%i)==0)
        {
        return 0;
        }
        else
        {
         return 1;    
        }
    }
}

int main()
{
    int N,i;
    scanf("%d",&N);
    for (i=N;i>=N;++i)
    {
        int b;
        b=check_prime(i);
        if (b==1)
        {
            printf("%d",i);
            break;
        }
        else
        {
            continue;
        }
    }
    return 0;
}