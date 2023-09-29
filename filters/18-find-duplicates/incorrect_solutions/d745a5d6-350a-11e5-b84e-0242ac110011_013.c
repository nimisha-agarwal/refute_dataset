/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int i,j,n,num;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	scanf("%d",&num);
	a[i]=num;
	}
	for(i=0;i<n;i++)
	{
	   for(j=i+1;j<n;j++)
	 {   if(a[i]==a[j])
	    printf("yes");
	    return 0;
    }}
	  
	    printf("NO");
	
	    	return 0;
}