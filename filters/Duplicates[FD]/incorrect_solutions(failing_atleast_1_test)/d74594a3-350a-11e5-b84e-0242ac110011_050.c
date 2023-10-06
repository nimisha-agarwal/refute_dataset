/*compile-errors:e160_280475.c:6:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",n);
           ~~  ^
e160_280475.c:4:13: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    int arr[n];
            ^
e160_280475.c:3:10: note: initialize the variable 'n' to silence this warning
    int n,i,j;
         ^
          = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main() {
    int n,i,j;
    int arr[n];
    int v=0;
    scanf("%d",n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j>0;j++)
        {
            if(arr[i]==arr[j]&&i!=j)
            {
              if(v==1)
              printf("yes");
              else
              printf("no");
            }
        }
    }
    return 0;
}