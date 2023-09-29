/*compile-errors:e158_278301.c:18:1: warning: control may reach end of non-void function [-Wreturn-type]
}
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
        if(num%i!=0)
        {
            return num;
        }
        else
        {
            return 0;
        }
    }
}

int main(){
    
    int i,N,m,m2;
    scanf("%d",&N);
    m=check_prime(N);
    if(m==N)
    {
        printf("%d",N);
    }
    if(m!=N)
    {
        for(i=N+1;i>=N+1;i++)
        {
            m2=check_prime(i);
            if(m2==i)
            {
                break;
            }
            
        }
        printf("%d",m2);
    }
    
    
    return 0;
}