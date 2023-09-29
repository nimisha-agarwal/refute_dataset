/*execute-result:OK*/
/*compile-errors:e158_278080.c:7:16: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    int a=sqrt(n);
               ^
e158_278080.c:6:14: note: initialize the variable 'n' to silence this warning
    int i=2,n;
             ^
              = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>

int check_prime(int num)
{
    int i=2,n;
    int a=sqrt(n);
    for(i=2;i<=a;i=i+1)
    {
        if((num%i)==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int N,a=0,i,p;
    scanf("%d",&N);
    for (i=3;i<=N-2;i=i+1)
    {
        p=check_prime(i) && check_prime(i+2);
        if(p==1)
        {
            a=a+1;
        }
    }
    printf("%d",a);
    return 0;
}