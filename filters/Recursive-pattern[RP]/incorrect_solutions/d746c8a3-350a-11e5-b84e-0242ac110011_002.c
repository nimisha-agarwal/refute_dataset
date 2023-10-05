/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int x;
void f(int n)
{
    static int c=0;
    c++;
    printf("%d",n);
    if(c==(2*x+1))
    {return;}
    if(c<=x)
    {
        f(n-5);
    }
    else
    {
        f(n+5);
    }
}
int main()
{   
    int N;
    scanf("%d",&N);
    int a;
    int b;
    a=N/5;
    b=N%5;
    if(b>0)
    {
        x=a+1;
    }
    else
    x=a;
    f(N);
	return 0;
}