/*execute-result:TL*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n,m;
n=m;
int string(n)
{
    printf("%d ",n);
    if(n<1&&n!=m)
    return string(m+5);
    else
    return string(n-5);
}
int main(){
    scanf("%d",&n);
    string(n);
	return 0;
}