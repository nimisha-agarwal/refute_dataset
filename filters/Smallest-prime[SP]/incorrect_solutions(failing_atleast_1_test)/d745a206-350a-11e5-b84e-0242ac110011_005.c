/*compile-errors:e158_278320.c:19:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278320.c:24:13: warning: variable 'c' is used uninitialized whenever 'for' loop exits because its condition is false [-Wsometimes-uninitialized]
    for(p=N;p>=N;p=p+1)
            ^~~~
e158_278320.c:28:21: note: uninitialized use occurs here
        printf("%d",c);
                    ^
e158_278320.c:24:13: note: remove the condition if it is always true
    for(p=N;p>=N;p=p+1)
            ^~~~
e158_278320.c:22:12: note: initialize the variable 'c' to silence this warning
    int N,c,p;
           ^
            = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    scanf("%d",&num);
    int x=2;
    while(x<=num-1)
    {
        if (num%x==0)
        {
            break;
        }
        x++;
    }
    if (x==num)
        {
            return (num);
        }
}

int main(){
    int N,c,p;
    scanf("%d",&N);
    for(p=N;p>=N;p=p+1)
    {
        c=check_prime(p);break;
    }
        printf("%d",c);
    
    return 0;
}