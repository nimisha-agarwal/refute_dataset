#include <stdio.h>

void pattern(n){
	if(n<=0){
		printf("%d ",n);
		return;
	}	
	else{
		printf("%d ",n);
		pattern(n-5);
		printf("%d ",n);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	pattern(n);
	return 0;
}

