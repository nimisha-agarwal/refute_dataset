/*compile-errors:e158_278344.c:17:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278344.c:26:24: warning: comparison between pointer and integer ('int (*)(int)' and 'int')
        if (check_prime==1)
            ~~~~~~~~~~~^ ~
e158_278344.c:21:11: warning: unused variable 'p' [-Wunused-variable]
    int N,p,i;
          ^
3 warnings generated.*/
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
    int N,p,i;
    scanf("%d",&N);
    for (i=N;i>=N;++i)
    {
        check_prime(i);
        if (check_prime==1)
        {
            printf("%d",i);
        }
    }
    return 0;
}