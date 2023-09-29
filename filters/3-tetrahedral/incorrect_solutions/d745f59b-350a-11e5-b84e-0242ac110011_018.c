/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int n,i,j,sum;
	scanf("%d",&n);
	sum=0;
	for(i=0;i<=n;i++)
	{
	    j=0;
	    while(j<i)
	    {
	        sum=sum+j;
	        j=j+1;
	    }
	}
	printf("%d",sum);
	return 0;
}