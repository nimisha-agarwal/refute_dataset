/*compile-errors:e158_278279.c:5:11: warning: unused variable 'c' [-Wunused-variable]
    int i,c=0; 
          ^
e158_278279.c:17:17: warning: unused variable 'c' [-Wunused-variable]
    int a,b,n,i,c=0,d,x=0;
                ^
e158_278279.c:17:21: warning: unused variable 'd' [-Wunused-variable]
    int a,b,n,i,c=0,d,x=0;
                    ^
e158_278279.c:17:23: warning: unused variable 'x' [-Wunused-variable]
    int a,b,n,i,c=0,d,x=0;
                      ^
e158_278279.c:19:8: warning: variable 'a' is used uninitialized whenever 'if' condition is true [-Wsometimes-uninitialized]
    if(n==1)
       ^~~~
e158_278279.c:23:8: note: uninitialized use occurs here
    if(a==0)
       ^
e158_278279.c:19:5: note: remove the 'if' if its condition is always false
    if(n==1)
    ^~~~~~~~
e158_278279.c:17:10: note: initialize the variable 'a' to silence this warning
    int a,b,n,i,c=0,d,x=0;
         ^
          = 0
5 warnings generated.*/
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
    if(n==1)
    printf("2");
    else
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