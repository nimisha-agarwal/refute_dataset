/*execute-result:OK*/
/*compile-errors:e158_278272.c:13:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
int cnt=0;
for(int i=0;i<=num;i++)
{
    if(num%i==0)
    cnt++;
}
if (cnt==2)
return num;
}
int main()
{
    int n;
    scanf("%d",&n);
    int r=check_prime(n);
    printf("%d",r);
    return 0;
}