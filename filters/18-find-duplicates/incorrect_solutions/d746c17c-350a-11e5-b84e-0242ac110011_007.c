/*compile-errors:e160_280523.c:6:21: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
    scanf("%d",&ar1[i]);
                    ^
e160_280523.c:4:10: note: initialize the variable 'i' to silence this warning
    int i,j,k;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int i,j,k;
    int ar1[50];
    scanf("%d",&ar1[i]);
    for(j=1;j<=50;j++)
    {
        k=ar1[j];
    for(i=0;i<=49;i++)
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