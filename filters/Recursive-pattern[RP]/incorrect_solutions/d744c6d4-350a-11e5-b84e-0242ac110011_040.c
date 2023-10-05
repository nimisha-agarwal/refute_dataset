/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void pytr(int n,int b)
{
    printf("%d ",b);
    if(b==n-15)
    {
    bronn(n,b);
    }
    b=b-5;
    pytr(n,b);
}
void bronn(int n,int b)
{
    while(b<n)
    {
    b=b+5;
    printf("%d ",b);
    fun2(n,b);
    }
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    fun(n,n);
	return 0;
}