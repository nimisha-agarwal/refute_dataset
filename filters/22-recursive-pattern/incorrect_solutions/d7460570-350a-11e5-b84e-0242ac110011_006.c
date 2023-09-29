/*execute-result:TL*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n,m;
int string(n)
{
    printf("%d ",n);
    if(n<1)
    return string(n+5);
    else
    return string(n-5);
}
int main(){
    scanf("%d",&n);
    string(n);
	return 0;
}