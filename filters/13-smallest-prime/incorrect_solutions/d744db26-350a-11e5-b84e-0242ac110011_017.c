/*compile-errors:e158_278279.c:13:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
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
    int a,n,i,j,c=0;
    scanf("%d",&n);
    a=check_prime(n);
    for(i=a;i<=50;i++)
    {
       for(j=1;j<=i;j++)
       {
          if(a%i==0)
          c++;
       }
       if(c==2)
       break;
    }
    printf("%d",a);
    return 0;
}