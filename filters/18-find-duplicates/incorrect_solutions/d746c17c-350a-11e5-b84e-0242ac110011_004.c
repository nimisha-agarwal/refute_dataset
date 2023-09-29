/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int i,j,k,n;
    int ar1[50];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&ar1[i]);//taking input in the array
    }
    for(j=0;j<=n;j++)
    {
        k=ar1[j];//comparing each element of array with other elements 
    for(i=0;i<=n-1;i++)
    {
        if(k==ar1[i] && i!=j)
        {
            printf("YES");
            return 0;
        }
    }
    
    }
    printf("NO");
    
    return 0;
    }