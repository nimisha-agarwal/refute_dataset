/*compile-errors:e175_306040.c:11:9: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if(n=!temp)
       ~^~~~~~
e175_306040.c:11:9: note: place parentheses around the assignment to silence this warning
    if(n=!temp)
        ^
       (      )
e175_306040.c:11:9: note: use '==' to turn this assignment into an equality comparison
    if(n=!temp)
        ^
        ==
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pattern(int n,int temp)
{
    if (n<=0)
    {printf("%d ",n);
    return n;}
    else
    {
    printf("%d ",n);
    pattern(n-5,temp);
    if(n=!temp)
    printf("%d ",n);
    }
    return n; 
}
int main()
{
    int n,t;
    scanf("%d",&n);
    t=n;
    printf("%d",pattern(n,t));
    
    
	return 0;
}