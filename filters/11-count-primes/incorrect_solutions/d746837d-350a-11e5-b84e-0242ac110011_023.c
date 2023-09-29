/*execute-result:OK*/
/*compile-errors:e158_278097.c:34:15: warning: unused variable 'l' [-Wunused-variable]
    int num,z,l;
              ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,j,t,m,count,u;
    count=1;
    u=1;
    for(i=2;i<=num;i++)
    {
        for(j=2;j<i;j++)
        {
            if((i%j)!=0)
            {
                u=u+1;
                t=i+2;
                for(m=2;m<t;m++)
                {
                    if(t%m!=0)
                    {
                        count=count+1;
                    }
                }
            }break;
        }
    }
    return u;
    
}


int main()
{
    
    int num,z,l;
    scanf("%d",&num);
    z= check_prime(num);
    printf("%d",z);
    

    
    
    return 0;
}