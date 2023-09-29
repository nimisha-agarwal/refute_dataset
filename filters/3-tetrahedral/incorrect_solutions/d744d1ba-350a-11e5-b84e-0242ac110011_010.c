/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int j, N, sum=0;
	scanf("%d", &N);
	       j=N;
	 while (N>0)
	 {
	        while(j>0) 
	        {
	            sum=sum+j;
	            j--;         //summation(n).
	        }
	 N--;
	 }
	return 0;
}