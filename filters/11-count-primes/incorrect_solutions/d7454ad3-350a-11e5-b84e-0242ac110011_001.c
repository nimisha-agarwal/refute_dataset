/*compile-errors:e158_278036.c:12:15: warning: unused variable 'v' [-Wunused-variable]
    int j;int v=0;
              ^
e158_278036.c:24:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",N);
           ~~  ^
e158_278036.c:24:16: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    scanf("%d",N);
               ^
e158_278036.c:23:10: note: initialize the variable 'N' to silence this warning
    int N,i;
         ^
          = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int k=0;
int check_prime(int num);

void fun1(int x,int y)
{
    if(check_prime(x)&&check_prime(y))
    k++;
}
int check_prime(int num)
{
    int j;int v=0;
    for(j=2;j<num;j++)
    {
        if(num%j==0)
        return 0;
    }
    return 1;
}

int main()
{
    int N,i;
    scanf("%d",N);
    for(i=0;i<=(N-2);i++)
    {
        fun1(i,2+i);
    }
    return 0;
}