/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int n,arr[50],j,c=0;
	scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
	    scanf("%d",&arr[k]);
	}
	for(int i=0;i<n;i++)
	{
	    for(j=i;j<n;j++)
	    {
	        if(arr[i]==arr[j])
	          c=1;
	    }
	}
	if(c==1)
	{
	    printf("YES");
	}
	else
	{
	    printf("NO");
	}
	return 0;
}