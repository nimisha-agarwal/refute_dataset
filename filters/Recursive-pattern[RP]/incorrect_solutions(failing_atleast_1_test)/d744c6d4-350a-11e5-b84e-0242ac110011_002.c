/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void pytr(int n,int b)
{
    printf("%d ",b);
    if(b==n-15)
    bronn(n,b);
    b=b-5;
    pytr(n,b);
}
int bronn(int n,int b)
{
    b=b+5;
    printf("%d ",b);
    if(b==n)
    return  0;
    bronn(n,b);
}
int main(){
    int n;
    scanf("%d",&n);
    pytr(n,n);
	return 0;
}