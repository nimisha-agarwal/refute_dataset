/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int n,i,j,sum;         //declared all the required variable
	scanf("%d",&n);        //input the value of n
	sum=0;            //initially the sum of terms is taken to be zero
	i=1;
	while(i<n)
	{
	    j=1;               //assignining initial value 1 to j
	    while(j<=i)        //condition 
	    {
	        sum = sum+j;   //
	        j=j+1;         //update statement
	    }
	    i=i+1;
	}
	printf("%d",sum);
	return 0;
}