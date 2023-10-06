/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int n;
	int c=0;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for (int k=0;k<n;k++)
	{
	    for(int j=0;j<n;j++)
	    {
	        if(a[k]==a[j])
	        c=c+1;
	    }
	}
	if (c>=2)
	{
	    printf("YES");
	}
    else
    {
        printf("NO");
    }
	return 0;
}