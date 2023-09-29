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
    scanf("%d",&num);
    int x=2;
    while(x<=num-1)
    {
        if (num%x==0)
        {
            return 0;
        }
        x++;
    }
    if (x==num)
        {
            return (num);
        }
}

int main(){
    int N,c,p;
    scanf("%d",&N);
    for(p=N;p>=N;p=p+1)
    {
        c=check_prime(p);
        if (c!=p)
        {
            return 0;
        }    
            continue;
        if (c==p)
        
        {
        printf("%d",c);
        }
        break;
    }
    return 0;
}