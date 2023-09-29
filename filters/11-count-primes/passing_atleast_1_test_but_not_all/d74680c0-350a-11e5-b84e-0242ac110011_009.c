/*compile-errors:e158_278096.c:14:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
e158_278096.c:20:16: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    for(i=2;i<=n-2;i++)
               ^
e158_278096.c:17:20: note: initialize the variable 'n' to silence this warning
    int N,count,i,n;
                   ^
                    = 0
2 warnings generated.*/
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
    int N,count,i,n;
    scanf ("%d",&N);
    count=0;
    for(i=2;i<=n-2;i++)
    count=count+1;
    printf("%d",count);
    
    return 0;
}