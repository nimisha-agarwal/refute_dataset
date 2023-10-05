/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>
int check_prime(int num)
{
    int c=0;
    if(num==1)
    {
        return 0;
    }
    if (num==2||num==3)
    {
        return num;
    }
    else
    {
        for(int i=2;i<(int)sqrt(num);i++)
        {
            if(num%i==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            return num;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    int a,o;
    scanf("%d\n",& a);
    do
    {
        o=check_prime(a);
        if(o!=0)
        {
            printf("%d\n",o);
        }
        else
        {
            a++;
        }    
    }
    while(o!=0);
    return 0;
}