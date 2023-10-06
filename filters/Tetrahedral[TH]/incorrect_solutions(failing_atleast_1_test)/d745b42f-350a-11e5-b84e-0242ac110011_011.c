/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	//Enter your code here
	int i=1;
	int n;
	int sum=0;
	scanf("%d",&n);
	while(i<=n){
	    scanf("%d",&n);
	    sum=sum+(i*(i+1))/2;
	    i=i+1;
	}
	    printf("%d",sum);
	    
	
	
	
	return 0;
}