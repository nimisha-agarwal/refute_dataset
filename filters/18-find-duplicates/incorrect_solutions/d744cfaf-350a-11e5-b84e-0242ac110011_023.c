/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int a[50];
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i=i+1)
    {
        scanf("%d ",&a[i]);
        {
            for(j=0;j<(i-1);j=j+1)
            if(a[j]!=a[j+1])
        {
                printf("YES");break;
            }
            else
            {
                printf("NO");break;
            }
        }
    }
        
	// Fill this area with your code.
	return 0;
}