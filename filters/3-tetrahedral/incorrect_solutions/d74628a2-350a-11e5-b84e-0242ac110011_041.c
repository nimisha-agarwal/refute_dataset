/*execute-result:OK*/
/*compile-errors:e158_277958.c:9:22: warning: for loop has empty body [-Wempty-body]
    for(i=1;i<=j;i++);
                     ^
e158_277958.c:9:22: note: put the semicolon on a separate line to silence this warning
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int n,i,j;
    printf("n");
    scanf("%d",&n);
    for(j=1;j<=n ;j++);
    for(i=1;i<=j;i++);
    {
        n=n+i;	//Enter your code here
	return 0;
    }  
    }

