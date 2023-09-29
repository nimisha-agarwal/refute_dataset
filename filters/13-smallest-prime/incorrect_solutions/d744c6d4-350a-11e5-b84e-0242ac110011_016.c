/*compile-errors:e158_278276.c:5:11: warning: unused variable 'j' [-Wunused-variable]
    int i,j;
          ^
e158_278276.c:23:12: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
        if(b==1)
           ^
e158_278276.c:19:12: note: initialize the variable 'b' to silence this warning
    int a,b,i;
           ^
            = 0
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
    int a,b,i;
    scanf("%d",&a);
    for(i=a; ;i++)
    {
        if(b==1)
        {
            printf("%d",a);
        }
    }
    return 0;
}