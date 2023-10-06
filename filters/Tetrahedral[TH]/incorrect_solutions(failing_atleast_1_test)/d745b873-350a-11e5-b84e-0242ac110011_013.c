/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int sum,i,j,n;
	sum=0;
	scanf ("%d",&n);
	for (i=0;i<=n;++i) {
	     printf ("%d",sum);
	    for (j=i;j<=n;++j) {
	        sum =sum+j;
	    }
	}
	return 0;
}