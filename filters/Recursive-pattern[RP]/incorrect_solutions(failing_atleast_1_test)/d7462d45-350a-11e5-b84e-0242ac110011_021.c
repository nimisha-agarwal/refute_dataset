/*compile-errors:e175_306031.c:5:9: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if(n=a)
       ~^~
e175_306031.c:5:9: note: place parentheses around the assignment to silence this warning
    if(n=a)
        ^
       (  )
e175_306031.c:5:9: note: use '==' to turn this assignment into an equality comparison
    if(n=a)
        ^
        ==
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void loop(int n)
{
    int a=n;
    if(n=a)
    {
        printf("%d",n);
        return;
    }
    if(n<=0)
    {
        printf("%d ",n);
        n=n+5;
    }
    printf("%d ",n);
    n=n-5;
    loop(n);
}
int main(){
    int n;
    scanf("%d",&n);
    loop(n);
	return 0;
}