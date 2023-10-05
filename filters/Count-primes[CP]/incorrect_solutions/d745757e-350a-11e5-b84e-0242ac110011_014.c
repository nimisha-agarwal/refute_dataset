/*compile-errors:e158_278042.c:21:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,p=0;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            break;
        }
        else
        {
            p=p+1;
        }
    }
    if(p==num-2)
    {
        printf("it is a prime");    
    }        
}


int main(){
    int a;
    scanf("%d",&a);
    check_prime(a);
    return 0;
}