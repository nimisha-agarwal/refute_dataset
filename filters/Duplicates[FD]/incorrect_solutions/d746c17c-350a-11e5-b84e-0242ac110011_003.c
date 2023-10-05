/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int i,j,k,n;
    int ar1[50];
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        scanf("%d",&ar1[i]);
        k=ar1[j];
    for(i=0;i<=n-1;i++)
    {
        if(k==ar1[i] && i!=j)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    }
    return 0;
    }