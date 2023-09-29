/*execute-result:OK*/
/*compile-errors:e158_278046.c:18:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,count=0;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return 2;
            break;
        }
        else
        count++;
    }
    if(count==(num-2))
    return 5;
}

int main()
{
    int n,p1,p2,j,k;
    int count1=0;
    scanf("%d",&n);
    for(p1=0;p1<=n;p1++)
    {
        p2=p1+2;
        j=check_prime(p1);
        k=check_prime(p2);
        if(j==2 && k==2)
        count1++;
    }
    printf("%d",count1);
    
    return 0;
}