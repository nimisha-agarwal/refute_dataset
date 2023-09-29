/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int a)
{
    int b=a-1;
    if(a==1)return 0;
    while (b>1)
    {
        if(a%b==0)
           return 0;
        
    b=b-1;      
    }
    return 1;
}

    int main () {
        int N;
        scanf("%d",&N);
      //  printf("%d",check_prime(N));
        
        int y;
        for(y=N;y>0;y++)
        {
            if(check_prime(y)==1)
            {
                printf("%d",y);
                break;
            }
        }
        return 0;
    }
    
