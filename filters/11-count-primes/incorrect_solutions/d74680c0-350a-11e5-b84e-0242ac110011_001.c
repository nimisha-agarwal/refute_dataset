/*execute-result:OK*/
/*compile-errors:e158_278096.c:14:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int n)
{
int i,a;
a=0;
for(i=2;i<=n-1;i++)
{
    if(n%i==0)
    {
        a=a+1;
    }
}
}

int main(){
    int N,count,i;
    scanf ("%d",&N);
    count=0;
    for(i=2;i<=N-2;i++)
    count=count+1;
    printf("%d",count);
    
    return 0;
}