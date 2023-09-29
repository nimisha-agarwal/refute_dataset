/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int n,i,j,flag;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	   
	}
	for(i=1;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        if(a[i]==a[j])
	        {
	            printf("YES");
	            flag=1;
	            break;
	        }
	        else
	        {
	            printf("NO");
	            break;
	        }
	    }
	    if(flag==1)
	    break;
	    
	}

	return 0;
}