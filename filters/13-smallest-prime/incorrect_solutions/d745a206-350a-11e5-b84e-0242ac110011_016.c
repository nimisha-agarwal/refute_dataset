/*execute-result:TL*/
/*compile-errors:e158_278320.c:19:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278320.c:24:13: warning: variable 'p' is uninitialized when used here [-Wuninitialized]
    for(N=1;p>=N;N=N+1)
            ^
e158_278320.c:22:10: note: initialize the variable 'p' to silence this warning
    int p,N,c;
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
            return 1;
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
    int p,N,c;
    scanf("%d",&N);
    for(N=1;p>=N;N=N+1)
    {
        c=check_prime(p);
    }
        printf("%d",p);
    
    return 0;
}