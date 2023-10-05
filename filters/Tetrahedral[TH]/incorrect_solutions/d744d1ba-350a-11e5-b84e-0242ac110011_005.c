/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int j, N, sum=0;
	scanf("%d", &N);
	       j=N;
	        while(j>0) 
	        {
	            sum=sum+j;
	            j--;         //summation(n).
	        }
	printf("%d", j);
	return 0;
}