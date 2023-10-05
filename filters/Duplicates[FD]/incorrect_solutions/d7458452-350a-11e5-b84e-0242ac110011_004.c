/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	   
	}
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        if(a[i]==a[j])
	        {
	            printf("YES");
	            break;
	        }
	        else
	        {
	            printf("NO");
	        }
	    }
	}

	return 0;
}