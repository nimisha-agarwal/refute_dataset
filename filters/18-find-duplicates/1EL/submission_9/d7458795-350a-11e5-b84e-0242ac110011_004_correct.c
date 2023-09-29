/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int n,count=0,j,i;
	scanf("%d",&n);
	int ar[n];
	scanf("\n");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&ar[i]);
	    
	}
	for(i=0;i<n;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if(ar[i]==ar[j])
	        {
	            count++;
	        }
	        
	    }
	}
	if(count>0)
	printf("YES\n");
	else
	printf("NO\n");
	return 0;
}