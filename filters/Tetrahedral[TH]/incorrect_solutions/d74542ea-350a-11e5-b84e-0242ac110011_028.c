/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int n,i,j,sum=0,fsum=0; //declaring variables
	scanf("%d",&n);         //taking input
	for(i=1;i<=n;i++)       //initialization loop
	{
	    for(j=1;j<=i;j++)   //loop for calculating each term
	    {
	        sum=sum+j;      //upto now n'th term is calculated 
	    }
	       fsum=fsum+sum;  //adding each term to get final sum
	}
	
	printf("%d",fsum);
	return 0;
}