/*compile-errors:e160_280523.c:7:16: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    for(j=1;j<=n;j++)
               ^
e160_280523.c:4:14: note: initialize the variable 'n' to silence this warning
    int i,j,n,k;
             ^
              = 0
e160_280523.c:6:21: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
    scanf("%d",&ar1[i]);
                    ^
e160_280523.c:4:10: note: initialize the variable 'i' to silence this warning
    int i,j,n,k;
         ^
          = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int i,j,n,k;
    int ar1[50];
    scanf("%d",&ar1[i]);
    for(j=1;j<=n;j++)
    {
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