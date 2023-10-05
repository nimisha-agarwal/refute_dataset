/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i;
    if (num>=2)
    {for(i=2;i<num;i++)
        {
        if(num%i==0)
        return 0;
        }
    return 1;
    }
    else
    return 1;

}


int main()
{   printf("%d",check_prime(1));
    }    