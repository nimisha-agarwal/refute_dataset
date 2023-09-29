/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int sum,i,j,n;
	sum=0;
	scanf ("%d",&n);
	for (i=0;i<=n;++i) {
	    for (j=0;j<=n;++j) {
	        sum =sum+j;
	    }
	}
	printf ("%d",sum);
	return 0;
}