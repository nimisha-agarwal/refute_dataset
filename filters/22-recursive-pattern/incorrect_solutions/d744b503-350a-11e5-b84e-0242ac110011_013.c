/*execute-result:OK*/
/*compile-errors:e175_305965.c:7:22: warning: for loop has empty body [-Wempty-body]
    for(i=0;i<=n;i++);
                     ^
e175_305965.c:7:22: note: put the semicolon on a separate line to silence this warning
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++);
    {
    printf("%d",i);
    }
    return 0;
}