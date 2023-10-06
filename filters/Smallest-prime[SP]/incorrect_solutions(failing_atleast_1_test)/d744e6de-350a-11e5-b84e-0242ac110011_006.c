/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int prime;
    for(int i=2;i<=(num/2);i++)
    {
        if(num%i==0)
        {
            for(int k=(num+1);k<num+5;k++)
            {
                if(!(k%k==0))
                {
                    prime=k;
                }
            }
            
        }
        else if(!(num%i==0))
        {
            prime=num;
        }
        
    }
    
    return prime;
}

int main(){
    int num,p;
    scanf("%d",&num);
    p=check_prime(num);
    printf("%d",p);
    return 0;
}