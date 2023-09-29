/*compile-errors:e160_280475.c:7:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",n);
           ~~  ^
e160_280475.c:5:13: warning: unused variable 'm' [-Wunused-variable]
    int n,i,m,N,j;
            ^
e160_280475.c:5:15: warning: unused variable 'N' [-Wunused-variable]
    int n,i,m,N,j;
              ^
e160_280475.c:6:13: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    int arr[n];
            ^
e160_280475.c:5:10: note: initialize the variable 'n' to silence this warning
    int n,i,m,N,j;
         ^
          = 0
4 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    
    int n,i,m,N,j;
    int arr[n];
    scanf("%d",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        for(j=1;j>i;j++)
        {
            scanf("%d",&arr[j]);
        }
    }
       
    
	return 0;
}