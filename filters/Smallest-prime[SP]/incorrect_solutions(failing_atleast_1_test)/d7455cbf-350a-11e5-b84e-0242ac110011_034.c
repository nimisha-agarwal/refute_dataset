/*execute-result:OK*/
/*compile-errors:e158_278303.c:23:17: warning: format specifies type 'int' but the argument has type 'int *' [-Wformat]
    printf("%d",&a);
            ~~  ^~
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{int a,i;
for(i=2;i<=num;i++)
{
    for(a=num;a>num;a++)
    {
        if(a%i==0)
        continue;
        if(a%i!=0)
        break;
    }
    
}
return a;
}

int main(){
    int num,a;
    scanf("%d",&num);
    int check_prime(int num);
    printf("%d",&a);
    return 0;
}