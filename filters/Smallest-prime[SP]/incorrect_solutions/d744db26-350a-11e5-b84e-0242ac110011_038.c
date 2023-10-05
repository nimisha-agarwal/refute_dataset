/*compile-errors:e158_278279.c:13:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278279.c:18:17: warning: unused variable 'c' [-Wunused-variable]
    int a,b,n,i,c=0;
                ^
2 warnings generated.*/
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
    int a,b,n,i,c=0;
    scanf("%d",&n);
    a=check_prime(n);
    if(a>=n)
    {
      printf("%d",a);
    }
    else
    {
      for(i=n+1;i<=100;i++)
      {
        b=check_prime(i);
      }
      printf("%d",b);
    }
    return 0;
}