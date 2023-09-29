/*compile-errors:e158_278350.c:18:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{   
    int p=0,j=0,flag=1;
    for(p=num;p>0;p++)
    {   for(j=0;j<p/2;j++)
        {
            if(p%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            return p;
    }
}

int main()
{
    int N=0,p;
    scanf("%d",&N);
    p=check_prime(N);
    printf("%d",p);
    return 0;
}