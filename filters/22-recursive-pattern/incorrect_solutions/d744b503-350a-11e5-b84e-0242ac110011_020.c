/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int N;
int main()
{
    int a,b=0;
    scanf("%d",&N);
    func1(N);
    return 0;
}

void func1(int a)
{
    printf("%d",a);
    if(a<=0)
    {
    func2(a);
    }
    else 
    a=a-5;
}

void func2(int b)
{
    b=b+5;
    printf("%d",b);
    if(b!=N)
    {
      func2(b);

    }
}