/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int i;int b;int n;
	scanf("%d",&n);
	for(i = 0; i<=n; i++){
	    b = (i*(i+1))/2;
	    printf("%d",b);
	    b++;
	}
	
	
	return 0;
}