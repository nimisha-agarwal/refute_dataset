/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int N,i,j,sum=0,t=0;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
	    t=t+sum;
	    for(j=1;j<=i;j++){
	        sum=sum+j;
	        }
	}
	printf("%d",t);
	return 0;
}