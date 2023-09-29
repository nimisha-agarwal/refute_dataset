/*compile-errors:e158_278304.c:23:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int check_prime(int num)
{
    int i,j,tmp;
    for(i=num;i>=num;i++)
    {
    for(j=2;j<i/2;j++)
    {
    tmp=1;
    if(i%j==0)
    {
        tmp=0;
        break;
    }
    }
    if(tmp==0)
    continue;
    if((tmp==1)&&(i>1))
    return i;
    }
}
    

int main()
{
    int N,x;
    scanf("%d",&N);
    x=check_prime(N);
    printf("%d",x);
    return 0;
}