/*execute-result:OK*/
/*compile-errors:e158_278081.c:14:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int num)
{
    int i,p;//defining of integers for function.
    p=0;
    for(i=2;i<num;i++)
    {
        if(p%i==0)
        p=1;
        return 0;
        p=0;
        return 1;
    }
}
int main()
{
    int a,b,count=0;
    scanf("%d",&a);
    for(b=2;b<=a;b++)
    { 
        count = count + (check_prime(b))&&(check_prime(b+2));
    }
    printf("%d",count);
    return 0;
}