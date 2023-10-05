/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int n,i,j,t;
	scanf("%d",&n);
	if (n<=0){
	    printf("Enter a positive integer.");
	}
	t=0;
	i=1;
	while(i<=n){
	    j=1;
	    while(j<=i){
	        t=t+j;
	        j=j+1;
	    }
	    i=i+1;
	}
	printf("%d",t);
	return 0;
}