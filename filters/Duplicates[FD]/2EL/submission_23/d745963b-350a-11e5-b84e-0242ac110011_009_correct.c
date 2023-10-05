/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main(){
	int n,c=0;   //n
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
	if (c>=n+1)
	{
	    printf("YES\n");
	}
    else
    {
        printf("NO\n");
    }
	return 0;
}