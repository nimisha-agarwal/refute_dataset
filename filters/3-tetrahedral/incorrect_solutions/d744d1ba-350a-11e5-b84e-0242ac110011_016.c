/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int i, j, N, sum=0, tet_sum=0;
	scanf("%d", &N);
	
	for(i=1; i<=N; i++) 
	{j=N;
	    while(j>0) 
	    {
	        sum=sum+j;
	        j--;        //summation(n).
	    }
	j--;
	tet_sum=tet_sum+sum; //summation of such series.
	}
	printf("%d", tet_sum);
	return 0;
}