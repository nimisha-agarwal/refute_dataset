/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int n,a,b,t;//declaring variables.
	scanf("%d",&n);//input
	if (n<=0){
	    printf("Enter a positive integer.");
	}
	t=0;
	a=1;
	while (a<=n){
	    b=1;
	    while (b<=a){
	        t=t+b;
	        b=b+1;
	    }
	    a=a+1;
	}//use of nested loop to compute sum.
	printf("%d",t);//output
	return 0;
}