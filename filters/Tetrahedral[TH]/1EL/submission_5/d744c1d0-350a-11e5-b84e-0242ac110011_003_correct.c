/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int i=1,j;
	int sum=0;
	int n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    for(j=1;j<=i;j++){
sum=sum+j;
	    }
	    
	}
	printf("%d",sum);
	return 0;
}