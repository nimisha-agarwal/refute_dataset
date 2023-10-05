/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int i,n;
	int num=0,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    num=num+i;
	    sum=sum+num;
	}
	printf("%d",sum);
	return 0;
}