/*execute-result:OK*/
/*compile-errors:e158_278097.c:5:13: warning: unused variable 't' [-Wunused-variable]
    int i,j,t,m,count,k,l;
            ^
e158_278097.c:5:15: warning: unused variable 'm' [-Wunused-variable]
    int i,j,t,m,count,k,l;
              ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,j,t,m,count,k,l;
    count=1;
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
            count=count+1;
        }
        
    }
    return count;
    
}


int main()
{
    
    int num,z;
    scanf("%d",&num);
    z= check_prime(num);
    printf("%d",z);
    

    
    
    return 0;
}