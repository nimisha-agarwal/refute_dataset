/*execute-result:OK*/
/*compile-errors:e175_305965.c:10:17: warning: format specifies type 'int' but the argument has type 'int *' [-Wformat]
    printf("%d",&a[i]);
            ~~  ^~~~~
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int n,i,a[7];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    scanf("%d",&a[i]);
    printf("%d",&a[i]);
    }
    return 0;
}