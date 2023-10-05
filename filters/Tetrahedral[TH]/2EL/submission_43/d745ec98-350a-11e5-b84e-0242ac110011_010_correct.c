/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int sum,i,j,n,sum1=0;  /*sum denotes sum of first n numbers and sum1                              denotes the sum of these sums for first n                                no.s,(which is the definition of                                         tetrahederal no.s)*/
	scanf("%d",&n);
	for(i=1;i<=n;i++)       
	{
	    sum=0;
	    for(j=1;j<=i;j++)  //computing the sum of first j no.s
	    {
	        sum=sum+j;
	    }
	    sum1=sum1+sum;     //addition of j over j=1 to j=n   
	}
	printf("%d",sum1);
	return 0;
}