/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int n,i,j,sum;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	    j=0;
	    for(j=0;j<=i;j++);
	    sum=sum+j;
	}
	printf("%d",sum);
	return 0;
}