/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int n;
	n=0;
	int sum;
	sum=0;
	int i;
	for (i=0;i<n;i++)
	{
	    scanf ("%d",&n);
	    n=(n*n+n)/2;
	    sum=sum+n;
	    
	}
	printf ("%d",sum);
	return 0;
}