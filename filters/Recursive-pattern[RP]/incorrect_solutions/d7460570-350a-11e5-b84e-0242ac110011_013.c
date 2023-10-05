/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
int string(n)
{
    printf("%d ",n);
    if(n<1)
    return n;
    else
    return string(n-5);
}
int main(){
    scanf("%d",&n);
    string(n);
    string(n+n);
	return 0;
}