/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include <math.h>
int check_prime(int num) 
{                      
int x,t,b,p;
int count=0;
int isprime;
for(x=1;x<=num;x=x+1)
{
    for(t=2;t<=sqrt(num);t=t+1)
    {
     b=x%t;
     if(b==0)
     {
      isprime=0;
      break;
     }
     else
     {
      isprime=1;
     }
    }
    p=x;
}
    if(p==p+2)
    {
     count=count+1;
    }
    return count;
}
    int main() {
    int num, ans;
    scanf("%d",&num);
    ans =check_prime(num);
    printf("%d",ans);
    return 0;
}