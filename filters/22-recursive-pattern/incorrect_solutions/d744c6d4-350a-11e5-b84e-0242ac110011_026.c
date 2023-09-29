/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pytr(int n,int b)
{   
    printf("%d ",b);
    if(b==n-15)
    return b;
    b=b-5;
    pytr(n,b);
}
int bronn(int n,int b)
{
    b=b+5;
    printf("%d ",b);
    if(b==n)
    return 0;
    bronn(n,b);
}
int main(){
    int n,b;
    scanf("%d",&n);
    b=pytr(n,n);
    bronn(n,b);
	return 0;
}