/*compile-errors:e158_278279.c:7:11: warning: unused variable 'c' [-Wunused-variable]
    int i,c=0; 
          ^
e158_278279.c:19:17: warning: unused variable 'c' [-Wunused-variable]
    int a,b,n,i,c=0,d,x=0;
                ^
e158_278279.c:19:21: warning: unused variable 'd' [-Wunused-variable]
    int a,b,n,i,c=0,d,x=0;
                    ^
e158_278279.c:19:23: warning: unused variable 'x' [-Wunused-variable]
    int a,b,n,i,c=0,d,x=0;
                      ^
4 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    if(num==0)
    return 0;
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
    a=check_prime(n);
    if(a==0)
    {
      for(i=n+1;1;i++)
      {
        b=check_prime(i);
        if(b!=0)
        {
          printf("%d",b);
          break;
        }
      }
    }
    else
    printf("%d",a);
    return 0;
}