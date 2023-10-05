/*execute-result:OK*/
/*compile-errors:e160_280475.c:10:25: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
        scanf("%d",&arr[i]);
                        ^
e160_280475.c:3:12: note: initialize the variable 'i' to silence this warning
    int n,i,j;
           ^
            = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main() {
    int n,i,j;
    int v=0;/*checking repitation or not*/
    scanf("%d",&n);
    int arr[n];/*defining array of n number*/

    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j>=0;j++)
        {
            if(arr[i]==arr[j]&&i!=j)
            {
                v=1;
            }
        }
    }
    if(v==1){
        printf("YES");/*yes assign for repitition*/
    }
    else{
        printf("NO");
    }
    
    
    
    return 0;
}