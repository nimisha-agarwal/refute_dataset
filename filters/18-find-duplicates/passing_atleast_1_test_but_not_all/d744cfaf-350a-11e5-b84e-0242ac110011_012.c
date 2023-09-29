/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int a[50];
    int i,j,c,n;
    scanf("%d",&n);
    for(i=0;i<n;i=i+1)
    {
        scanf("%d",&a[i]);
        for(j=0;j<i;j=j+1)
        {
            c=0;
            if(a[j]!=a[j+1])
            {
                c=c+1;
            }
        }
    }
        if(c>=1)
        {
            printf("YES");
        }else
        {
            printf("NO");
        }
        
	// Fill this area with your code.
	return 0;
}