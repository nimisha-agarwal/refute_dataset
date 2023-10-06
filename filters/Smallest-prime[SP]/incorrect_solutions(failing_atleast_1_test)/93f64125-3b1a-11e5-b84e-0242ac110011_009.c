/*compile-errors:e158_278262.c:15:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278262.c:29:14: warning: unused parameter 'argc' [-Wunused-parameter]
int main(int argc, char **argv)
             ^
e158_278262.c:29:27: warning: unused parameter 'argv' [-Wunused-parameter]
int main(int argc, char **argv)
                          ^
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int isPrime(int n)
{
    int i,j=0;
    for(i=1; i<=n; i++)
    {
        if(n%i == 0)
            j++;
    }
    if(j == 2)
        return 1;
    else if(j > 2)
        return 0;
}

int fun(unsigned int n)
{
    int i=n+1;
    while(1)
    {
        if(isPrime(i))
            break;
        i++;
    }
    return i;
}

int main(int argc, char **argv)
{
    printf("%d\n", fun(19));
    return 0;
}