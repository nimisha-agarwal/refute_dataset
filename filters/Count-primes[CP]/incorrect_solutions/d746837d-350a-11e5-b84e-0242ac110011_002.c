/*compile-errors:e158_278097.c:19:11: warning: unused variable 'i' [-Wunused-variable]
    int a,i,t,b,z,num,count;
          ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i;
    for(i=2;i<num;i++)
    {
        if((num%i)==0)
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    int a,i,t,b,z,num,count;
    scanf("%d",&a);
    count=0;
    for(num=2;num<a;num++)
    {
        t=num+2;
        z=check_prime(num);
        if(z==1)
        {
            b=check_prime(t);
            if(b==1)
            {
                count=count+1;
            }
        }
    }

    
    
    return 0;
}