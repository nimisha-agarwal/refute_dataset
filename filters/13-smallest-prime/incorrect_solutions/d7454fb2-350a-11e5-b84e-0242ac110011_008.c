/*execute-result:OK*/
/*compile-errors:e158_278299.c:14:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int a)
{
    int b=a-1;
    while (b>0)
    {
        if(a%b==0)
           return 1;
        else
          return 0;
    b=b-1;      
    }
}

    int main () {
        int N;
        scanf("%d",&N);
        int y;
        for(y=N;N>0;N++)
        {
            if(check_prime(y)==1)
            {
                printf("%d",y);
            }
            break;
        }
    }
    
