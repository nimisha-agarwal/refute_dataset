/*execute-result:OK*/
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
e160_280475.c:9:25: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
        scanf("%d",&arr[i]);
                        ^
e160_280475.c:3:12: note: initialize the variable 'i' to silence this warning
    int n,i,j;
           ^
            = 0
3 warnings generated.*/
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
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j>0;j++)
        {
            if(arr[i]==arr[j]&&i!=j)
            {
                v=1;
            }
        }
    }
    if(v==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    
    
    return 0;
}