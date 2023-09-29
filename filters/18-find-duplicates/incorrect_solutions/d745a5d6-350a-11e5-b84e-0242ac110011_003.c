/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int a[30],i,n,num;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&num);
	a[i]=num;
	}
	printf("%d",a[i]);
	
	
	return 0;
}