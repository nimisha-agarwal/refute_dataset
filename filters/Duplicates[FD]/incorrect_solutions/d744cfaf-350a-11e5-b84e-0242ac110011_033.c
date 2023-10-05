/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int a[50];
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<=n;i=i+1)
    {
        scanf("%d ",&a[n]);
        {
            for(j=0;j<=n;j=j+1)
            if(a[j]!=a[j+1])
        {
                printf("YES");
            }
            else
            {
                printf("NO");
            }
        }
    }
        
	// Fill this area with your code.
	return 0;
}