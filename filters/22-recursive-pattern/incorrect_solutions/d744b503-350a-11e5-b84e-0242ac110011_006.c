/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++);
    printf("%d",i);
    return 0;
}