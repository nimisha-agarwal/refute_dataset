/*compile-errors:e158_278276.c:5:11: warning: unused variable 'j' [-Wunused-variable]
    int i,j;
          ^
e158_278276.c:18:11: warning: unused variable 'b' [-Wunused-variable]
    int a,b;
          ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,j;
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1 ;
}

int main()
{
    int a,b;
    scanf("%d",&a);
    check_prime(a);
    return 0;
}