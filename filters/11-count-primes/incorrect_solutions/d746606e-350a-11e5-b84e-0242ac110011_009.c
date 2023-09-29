/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include <math.h>
int check_prime(int num) 
{                       /*This function will check for primes till N*/
int x,t,b,p;
int count=0;
for(x=1;x<=num;x=x+1)
{
    for(t=2;t<=sqrt(num);t=t+1)
    {
     b=x%t;
    }
    if(b!=0)
    {
     p=x;
    }
    if(p==p+2)
    {
     count=count+1;
    }
    printf("%d", count);
}
return 0;
}
    int main() {
    int num, ans;
    scanf("%d",&num);
    ans =check_prime(num);
    printf("%d",ans);
    return 0;
}