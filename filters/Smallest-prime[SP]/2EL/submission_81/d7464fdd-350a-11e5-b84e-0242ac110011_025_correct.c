/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i;
    if (num>=2)//for greater than and equal to 2
    {for(i=2;i<num;i++)//as prime no is not div by every smaller number 
        {
        if(num%i==0)
        return 0;
        }
    return 1;
    }
    else
    return 0;//for 1

}


int main()
{   int N;
    scanf("%d",&N);
    while(check_prime(N)==0)//check for no greater than or equal to input
    
    {N++;}
    printf("%d",N);
    return 0;
    }