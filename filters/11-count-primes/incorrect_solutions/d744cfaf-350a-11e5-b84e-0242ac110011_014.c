/*compile-errors:e158_278020.c:16:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i;
    for(i=2;i<num;i=i+1)
    {
        if(num%i==0)
        {
            return 0;
            
        }
        else
        return 1;
    }
}
//Complete function definitions

int main(){
    int c,N,a,i;
    c=0;
    scanf("%d",&N);
    for(i=0;i<=N;i=i+1)
    {
        a=check_prime(i);
        if((a==1) && (a+2==1))
       {
        c=c+1;
       }
        printf("%d",c);
    }
    return 0;
}    