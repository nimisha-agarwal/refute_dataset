/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int n,i,j,flag=0;
	scanf("%d",&n);//scan
	int a[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	   
	}
	for(i=1;i<n;i++)//one loop to scan a[i]
	{
	    for(j=0;j<i;j++)//nested loop to scan a[j]
	    {
	        if(a[i]==a[j])//if a[i]==a[j] break off from all loops and print YES
	        {
	            printf("YES");
	            flag=1;
	            break;
	        }
	    
	    }
	    if(flag==1)
	    break;
	    
	}
	if(flag!=1)
	{
	printf("NO");
	}
	return 0;
}