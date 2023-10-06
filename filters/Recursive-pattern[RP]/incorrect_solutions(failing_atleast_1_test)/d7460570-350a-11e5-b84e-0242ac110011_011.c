/*execute-result:OK*/
/*compile-errors:e175_306020.c:6:9: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if(n=1)
       ~^~
e175_306020.c:6:9: note: place parentheses around the assignment to silence this warning
    if(n=1)
        ^
       (  )
e175_306020.c:6:9: note: use '==' to turn this assignment into an equality comparison
    if(n=1)
        ^
        ==
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
int string(n)
{
    printf("%d ",n);
    if(n=1)
    return 10;
    else
    return string(n-5);
}
int main(){
    scanf("%d",&n);
    string(n);
	return 0;
}