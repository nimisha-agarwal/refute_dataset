/*compile-errors:sh: 1: exec: clang: not found*/
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