/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
int string(n)
{
    if(n<1)
    return n+45;
    else
    return string(n-5);
        printf("%d ",n);
}
int main(){
    scanf("%d",&n);
    string(n);
    
	return 0;
}