/*execute-result:OK*/
/*compile-errors:e158_278320.c:19:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int x=2;
    while(x<=num-1)
    {
        if (num%x==0)
        {
            return 0;
            break;
        }
        x++;
    }
    if (x==num)
        {
            return (num);
        }
}

int main(){
    int p=1,N,c;
    scanf("%d",&N);
    for(N=1;p>=N;N=N+1)
    {
        c=check_prime(p);
    }
        printf("%d",p);
    
    return 0;
}