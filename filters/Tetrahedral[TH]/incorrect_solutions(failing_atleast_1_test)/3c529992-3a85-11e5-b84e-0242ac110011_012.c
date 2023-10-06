/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int sum=0,i,s;
	for(i=0;i<n;i++){
	    s=i*(i+1)/2;
      sum=sum+s;
	}
	
	printf("%d",sum);
	return 0;
}