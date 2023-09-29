/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
int string(n)
{
    if(n<1)
    break;
    else
    string(n)=string(n-5);
    printf("%d",n);
}
int main(){
    scanf("%d",&n)
    string(n);
	return 0;
}