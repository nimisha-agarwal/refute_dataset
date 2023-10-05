/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void f(int n)
{
    static int c=0;
    c++;
    printf("%d",n);
    if(c==7)
    {return;}
    if(c<=3)
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
    f(N);
	return 0;
}