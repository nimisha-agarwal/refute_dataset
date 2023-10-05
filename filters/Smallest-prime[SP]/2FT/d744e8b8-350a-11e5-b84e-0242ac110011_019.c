/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,j;
    int flag=0;
    for(i=num;;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            flag=0;
        }
        else
        {
            break;
        }
    }
    return i;
}



int main(){
    
    int N,p;
    scanf("%d",&N);
    p=check_prime(N);
    printf("%d",p);
    
    return 0;
}