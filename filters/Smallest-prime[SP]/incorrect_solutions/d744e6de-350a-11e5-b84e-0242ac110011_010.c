/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int prime;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            for(int k=num+1;k<(num+3);k++)
            {
                for(int m=2;m<num+3;m++)
                {
                    if(!(k%m==0))
                    {
                        prime=k;
                    }
                }
            }
        }
        
    }
    
    return prime;
}

int main(){
    int num,p;
    scanf("%d",&num);
    p=check_prime(num);
    return 0;
}