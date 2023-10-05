/*execute-result:OK*/
/*compile-errors:e158_278279.c:13:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278279.c:18:17: warning: unused variable 'j' [-Wunused-variable]
    int a,b,n,i,j,c=0;
                ^
e158_278279.c:18:19: warning: unused variable 'c' [-Wunused-variable]
    int a,b,n,i,j,c=0;
                  ^
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,c=0; 
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        c++;
    }
    if(c==2)
    return num;
}


int main()
{
    int a,b,n,i,j,c=0;
    scanf("%d",&n);
    a=check_prime(n);
    for(i=a;i<=100;i++)
    {
       b=check_prime(n);
       if(b>=n)
       break;
    }
    printf("%d",a);
    return 0;
}