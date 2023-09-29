/*execute-result:TL*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int k;

void fn2(int n)
{
    printf("%d ",n);
    if(n==k)
        return;
    else
        fn2(n+5);
}

void fn1(int n)
{
    if(n<=0)
    {
        printf("%d ",n);
        fn2(n+5);
    }
     printf("%d ",n);
     fn1(n-5);
            
}

int main()
{
    int n;
    scanf("%d",&n);
    k=n;
    fn1(n);

	return 0;
}