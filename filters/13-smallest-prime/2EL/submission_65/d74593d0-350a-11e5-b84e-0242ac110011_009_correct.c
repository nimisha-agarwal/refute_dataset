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
        return 1;
    }
    else
    {
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            return 1;
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
        if(o==1)
        {
            printf("%d\n",a);
        }
        else
        {
            a++;
        }    
    }
    while(o!=1);
    return 0;
}