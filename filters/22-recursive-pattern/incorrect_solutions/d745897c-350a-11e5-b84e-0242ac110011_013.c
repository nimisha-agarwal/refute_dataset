/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int n;
int dec(int a)
{
    printf("%d ",a);
    if (a>0)
    return dec(a-5);
    if(a<=0)
    return inc(a);
}
int inc(int a)
{
    printf("%d ",a);
    if(a<n)
    return inc(a+5);
    
    
}

int main(){
	scanf("%d",&n);
	dec(n);
	return 0;
}