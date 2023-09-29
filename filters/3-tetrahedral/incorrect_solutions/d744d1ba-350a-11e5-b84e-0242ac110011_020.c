/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int j, N, sum=0, tet_sum=0;
	scanf("%d", &N);
	{
	j=N;
	        while(j>0) 
	        {
	            sum=sum+j;
	            j--;         //summation(n).
	        }
	j--;
	tet_sum=tet_sum+sum; //summation of such series.
	}
	printf("%d", tet_sum);
	return 0;
}