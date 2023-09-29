/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int sum,i,j,n,sum1=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=i;j++)
	    {
	        sum=0;
	        sum=sum+j;
	    }
	    sum1=sum1+sum;
	}
	printf("%d",sum1);
	return 0;
}