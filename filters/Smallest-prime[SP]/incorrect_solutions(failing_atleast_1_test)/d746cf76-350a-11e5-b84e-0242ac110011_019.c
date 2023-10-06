/*execute-result:OK*/
/*compile-errors:e158_278366.c:15:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)

{
    int a;
    for (a=2;a<num;a++)
    {
        if (num%a==0)
        return 0;
        break;
    }
    if (a==num)
    return 1;
}

int main(){
    
    int a;
    a=8;
    if (check_prime(a)==1)
    printf ("yes");
    return 0;
}