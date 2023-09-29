/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int main()
{
    int n,s=0,t=0,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        s=s+1;
        t=t+s;
    }
        printf("%d",t);
    return 0;
}