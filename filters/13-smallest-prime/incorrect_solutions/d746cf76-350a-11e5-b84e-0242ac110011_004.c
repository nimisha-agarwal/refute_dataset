/*execute-result:OK*/
/*compile-errors:e158_278366.c:14:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278366.c:18:11: warning: unused variable 'p' [-Wunused-variable]
    int n,p;
          ^
2 warnings generated.*/
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
    }
    if (a==num)
    return 1;
}

int main(){
    
    int n,p;
    scanf ("%d", &n);
    if (check_prime(n)==1)
        printf ("prime");
    
    return 0;
}