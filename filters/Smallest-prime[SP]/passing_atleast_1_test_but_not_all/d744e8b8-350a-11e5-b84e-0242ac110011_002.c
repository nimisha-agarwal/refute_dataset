/*compile-errors:e158_278282.c:24:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,j;
    for(i=num;;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
            else
            {
                return i;
            }
        }
        if(j==i)
        {
            break;
        }
    }
}



int main(){
    
    int N,p;
    scanf("%d",&N);
    p=check_prime(N);
    printf("%d",p);
    
    return 0;
}