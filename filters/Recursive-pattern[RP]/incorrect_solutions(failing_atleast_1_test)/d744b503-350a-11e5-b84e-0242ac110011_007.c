/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b=0;
    scanf("%d",&a);
    printf("%d",func1(a));
    return 0;
}

int func1(int a)
{
    printf("%d",a);
    a=a-5;
    if(a<=0)
    {
    return 0;
    }
    func1(a);
}

int func2(int a, int b)
{
    b=b+5;
    printf("%d",b);
    if(b==a)
    {
        return 0;
    }
    func2(a,b)
}