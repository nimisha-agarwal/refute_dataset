/*execute-result:OK*/
/*compile-errors:e175_306020.c:14:6: warning: expression result unused [-Wunused-value]
    n-string(n);
    ~^~~~~~~~~~
1 warning generated.*/
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
    n-string(n);
	return 0;
}