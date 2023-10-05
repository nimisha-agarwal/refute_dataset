/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int n,i,j,sum=0,fsum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=i;j++)
	    {
	        sum=0;
	        sum=sum+j;
	        fsum=fsum+sum;
	    }
	}
	
	printf("%d",fsum);
	return 0;
}