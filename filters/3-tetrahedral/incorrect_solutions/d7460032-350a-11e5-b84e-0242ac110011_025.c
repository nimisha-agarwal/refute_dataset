/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int i,sum=0,n;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{   sum=sum+i;
	    int j;
	for(j=0;j<=n;j=j+1)
	{sum=sum+j;
	continue;}}
	printf("%d",sum);
	return 0;
}