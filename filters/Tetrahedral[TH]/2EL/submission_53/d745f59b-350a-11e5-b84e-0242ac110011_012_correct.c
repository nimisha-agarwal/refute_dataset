/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int n,i,j,sum; //declared all the required variable
	scanf("%d",&n); //input the value of n
	sum=0; //initially the sum of terms is taken to be zero
	for(i=0;i<=n;i++)
	{
	    j=0; 
	    while(j<i)
	    {
	        sum=sum+j+1;
	        j=j+1;
	    }
	}
	printf("%d",sum);
	return 0;
}