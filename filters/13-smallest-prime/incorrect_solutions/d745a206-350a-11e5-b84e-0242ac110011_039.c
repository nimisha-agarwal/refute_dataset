/*compile-errors:e158_278320.c:19:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278320.c:22:13: warning: variable 'p' is used uninitialized whenever function 'main' is called [-Wsometimes-uninitialized]
    int N,c,p;
    ~~~~~~~~^
e158_278320.c:24:10: note: uninitialized use occurs here
    for(;p>=N;p=p+1)
         ^
e158_278320.c:22:14: note: initialize the variable 'p' to silence this warning
    int N,c,p;
             ^
              = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int x=2;
    while(x<=num-1)
    {
        if (num%x==0)
        {
            return 0;
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
    for(;p>=N;p=p+1)
    {
        c=check_prime(p);
    }
        printf("%d",p);
    
    return 0;
}