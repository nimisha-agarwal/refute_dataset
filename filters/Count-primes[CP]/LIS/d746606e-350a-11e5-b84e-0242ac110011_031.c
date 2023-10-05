/*compile-errors:e158_278088.c:5:11: warning: unused variable 'p' [-Wunused-variable]
int x,t,b,p;
          ^
e158_278088.c:9:8: warning: variable 'x' is uninitialized when used here [-Wuninitialized]
     b=x%t;
       ^
e158_278088.c:5:6: note: initialize the variable 'x' to silence this warning
int x,t,b,p;
     ^
      = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include <math.h>
int check_prime(int num) 
{                      
int x,t,b,p;
int isprime=1;
for(t=2;t<=sqrt(num);t=t+1)
    {
     b=x%t;
     if(b==0)
     {
      isprime=0;
      break;
     }
    }
return isprime;
}
    int main() {
    int N,i;
    int count=0;
    scanf("%d",&N);
    for(i=2;i<=N-2;i=i+1)
    {
        if(check_prime(i)&&check_prime(i+2))
        count=count+1;
    }
    printf("%d",count);
    return 0;
}