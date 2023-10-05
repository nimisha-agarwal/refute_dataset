/*compile-errors:e158_278279.c:5:11: warning: unused variable 'c' [-Wunused-variable]
    int i,c=0; 
          ^
e158_278279.c:17:17: warning: unused variable 'c' [-Wunused-variable]
    int a,b,n,i,c=0,d,x=0;
                ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,c=0; 
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        return 0;
    }
    return num;
}


int main()
{
    int a,b,n,i,c=0,d,x=0;
    scanf("%d",&n);
    d=n;
    a=check_prime(n);
    if(a==0)
    {
      for(i=n+1;i<=100;i++)
      {
        b=check_prime(i);
        if(b==0)
        x++;
        else
        printf("%d",b);
        break;
      }
    }
    else
    printf("%d",a);
    return 0;
}