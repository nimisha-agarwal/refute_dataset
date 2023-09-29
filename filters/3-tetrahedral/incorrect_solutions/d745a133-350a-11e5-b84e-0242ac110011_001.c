/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	       int N;
	       int i; //variable to be used in the outer loop
	       int j; //variable to be used in the inner loop
	       int sum=0; //variable to store sum after each iteration
	       int tetrahedral_no=0; //to store final value
	       
	       scanf("%d",&N);// input N
	       
	       for(i=1;i<=N;i++) //outer loop
	       {
	        for (j=1;j<=i;j++) //inner loop
	        sum=sum+j;
	        
	        tetrahedral_no+=sum; //update the value of tetrahedral no
	        sum=0; //to calcluate new value in the next iteration
	       }
	       
	       printf("%d",sum);
	       
	return 0;
}