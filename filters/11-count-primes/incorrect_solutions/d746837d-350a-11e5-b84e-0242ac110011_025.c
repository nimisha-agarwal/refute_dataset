/*execute-result:OK*/
/*compile-errors:e158_278097.c:43:15: warning: unused variable 'l' [-Wunused-variable]
    int num,z,l;
              ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,j,t,m,count,k,l;
    count=0;
    k=0;
    l=0;
    for(i=2;i<=num;i++)
    {
        for(j=2;j<i;j++)
        {
            if((i%j)==0)
            {
                k=k+1;
            }
        }
        if(k==0)
        {
            t=k+2;
            for(m=2;i<t;i++)
            {
                if((i%j)==0)
                {
                    l=l+1;
                }
            }
            if(l==0)
            {
                count=count+1;
            }
    
        }
    }
    return count;
    
}


int main()
{
    
    int num,z,l;
    scanf("%d",&num);
    z= check_prime(num);
    printf("%d",z);
    

    
    
    return 0;
}