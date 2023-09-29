/*compile-errors:e158_278344.c:17:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278344.c:26:24: warning: comparison between pointer and integer ('int (*)(int)' and 'int')
        if (check_prime==1)
            ~~~~~~~~~~~^ ~
2 warnings generated.*/
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
        check_prime(i);
        if (check_prime==1)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}