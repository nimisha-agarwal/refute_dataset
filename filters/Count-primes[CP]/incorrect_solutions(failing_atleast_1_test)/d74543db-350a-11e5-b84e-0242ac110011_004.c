/*compile-errors:e158_278031.c:20:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
e158_278031.c:25:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",num);
           ~~  ^~~
e158_278031.c:25:16: warning: variable 'num' is uninitialized when used here [-Wuninitialized]
    scanf("%d",num);
               ^~~
e158_278031.c:24:12: note: initialize the variable 'num' to silence this warning
    int num;
           ^
            = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i=2,a;
    while(i<num)
    {
        a=num%i;
        if (a==0)
        {
            printf("1");
            break;
        }
        
    }
    if (a!=0)
    {
        printf("0");
    }
}

int main(){
    
    int num;
    scanf("%d",num);
    printf("%d",check_prime(num));
    
    return 0;
}