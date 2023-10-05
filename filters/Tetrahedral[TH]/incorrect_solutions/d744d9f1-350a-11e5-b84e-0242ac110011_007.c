/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int n,s,T;
	int i;
	scanf("%d",&n);
	for(i=1; i<n; i=i+1){
	  s=s+i;
	  T=T+s;
	  printf("%d",T);
	}
	return 0;
}