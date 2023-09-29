/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int n,a,b,t;
	scanf("%d",&n);
	if (n<=0){
	    printf("Enter a positive integer.");
	}
	t=0;
	a=1;
	while (a<=n){
	    b=1;
	    while(b<=n){
	        t=t+b;
	        b=b+1;
	    }
	    a=a+1;
	}
	printf("%d",t);
	return 0;
}