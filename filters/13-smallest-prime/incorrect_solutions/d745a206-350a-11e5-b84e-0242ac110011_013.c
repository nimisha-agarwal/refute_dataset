/*compile-errors:e158_278320.c:19:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
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
    
    //Write your code here
    
    return 0;
}