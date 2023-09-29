/*compile-errors:e158_278303.c:14:17: warning: format specifies type 'int' but the argument has type 'int *' [-Wformat]
    printf("%d",&c);
            ~~  ^~
e158_278303.c:20:13: warning: unused variable 'a' [-Wunused-variable]
    int num,a;
            ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{int a,i,c;
for(a=num+1;a<2*num;a++)
{
    for(i=2;i<=num;i++)
    {
        if(a%i==0)
        break;
        if(a%i!=0)
        c=a;
    }
    printf("%d",&c);
}
return a;
}

int main(){
    int num,a;
    scanf("%d",&num);
    int check_prime(int num);

    return 0;
}