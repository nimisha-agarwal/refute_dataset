/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void loop(int n)
{
    if(n<=0)
    return;
    printf("%d",n);
    n=n-5;
    loop(n);
}
int main(){
    int n;
    scanf("%d",&n);
    loop(n);
	return 0;
}