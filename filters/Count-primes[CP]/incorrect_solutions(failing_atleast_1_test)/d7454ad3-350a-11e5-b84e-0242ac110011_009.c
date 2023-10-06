/*compile-errors:*/
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
    int j;
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
    scanf("%d",&N);
    for(i=0;i<=(N-2);i++)
    {
        fun1(i,2+i);
    }
    return 0;
}