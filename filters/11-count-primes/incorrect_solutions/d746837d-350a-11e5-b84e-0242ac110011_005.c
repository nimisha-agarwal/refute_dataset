/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,j,t,m,count,k,l,lol=0;
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
            lol=lol+1;
            t=i+2;
            for(m=2;m<t;m++)
            {
                if((t%m)==0)
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
    return lol;
    
}


int main()
{
    
    int num,z;
    scanf("%d",&num);
    z= check_prime(num);
    printf("%d",z);
    

    
    
    return 0;
}