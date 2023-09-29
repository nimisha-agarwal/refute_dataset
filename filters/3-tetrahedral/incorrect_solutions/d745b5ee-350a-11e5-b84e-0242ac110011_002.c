/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	if(n<0){
	    printf("please enter a number above 0");
	    scanf("%d",&n);
	}
	int p= 0;
	for(int i=1;i<=n;i++){
	    p=p+((i*(i+1))/2);
	}
	return 0;
}