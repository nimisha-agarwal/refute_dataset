/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int n,i,sum=0;
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
	sum=sum+i;
	sum=sum+i*(i+1)/2;
	printf("%d",sum);
	return 0;
}