/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
int string(n)
{
    printf("%d ",n);
    if(n<1)
    return n+1000000;
    else
    return string(n-5);
}
int main(){
    scanf("%d",&n);
    string(n);
	return 0;
}