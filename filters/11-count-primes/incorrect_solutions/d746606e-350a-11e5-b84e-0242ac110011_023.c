/*execute-result:OK*/
/*compile-errors:e158_278088.c:5:11: warning: unused variable 'p' [-Wunused-variable]
int x,t,b,p;
          ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include <math.h>
int check_prime(int num) 
{                      
int x,t,b,p;
int isprime=1;
for(x=3;x<=num;x=x+1)
{
    for(t=2;t<=sqrt(num);t=t+1)
    {
     b=x%t;
     if(b==0)
     {
      isprime=0;
      break;
     }
    }
}
return isprime;
}
    int main() {
    int num,i;
    int count=0;
    scanf("%d",&num);
    for(i=2;i<=num-2;i=i+1)
    {
        if(check_prime(i)&&check_prime(i+2))
        count=count+1;
    }
    printf("%d",count);
    return 0;
}