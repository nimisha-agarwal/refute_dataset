/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int s,i;
	for(i=0;i<n;i++){
	    s=i*(i+1)/2;
	}
	
	printf("%d",s);
	return 0;
}