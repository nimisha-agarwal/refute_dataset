/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int i,j,N,sum=0,sum1=0;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
	    for(j=1;j<=i;j++)
	    {
	        sum=sum+j;
	        sum1=sum1+sum;
	    }
	}
	printf("%d",sum1);
	
	return 0;
}