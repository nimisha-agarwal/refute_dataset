/*execute-result:TL*/
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
        if(num%i!=0)
        return 0;
        }
    return 1;}
    else
    return 1;

}


int main()
{   int N;
    scanf("%d",&N);
    while(check_prime(N)==0)
    {N++;}
    printf("%d",N);
    return 0;
    }    