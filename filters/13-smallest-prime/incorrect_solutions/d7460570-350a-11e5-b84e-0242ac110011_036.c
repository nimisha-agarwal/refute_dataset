/*execute-result:OK*/
/*compile-errors:e158_278328.c:10:12: warning: incompatible pointer to integer conversion returning 'int (int)' from a function with result type 'int' [-Wint-conversion]
    return check_prime;
           ^~~~~~~~~~~
e158_278328.c:13:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int a;
    int i;
    for(i=num;i>=num;i=i+1)
    {for(a=2;a<i;a=a+1)
    {if((i%a)==0)
    return check_prime;
    else
    return i;}}
}

int main(){
    int n,k;
    scanf("%d",&n);
    k=check_prime(n);
    printf("%d",k);
    
    return 0;
}