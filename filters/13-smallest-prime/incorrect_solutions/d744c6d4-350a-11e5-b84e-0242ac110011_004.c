/*execute-result:OK*/
/*compile-errors:e158_278276.c:21:11: warning: unused variable 'b' [-Wunused-variable]
    int a,b;
          ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int x){
    int i,j;
    for(i=1;i<x;i++)
    {
        if(x%i!=0)
        {
            j=i;
        }
        else
        {
            j=i+1;
        }
    }
    return j;
}

int main()
{
    int a,b;
    scanf("%d",&a);
    check_prime(a);
    return 0;
}