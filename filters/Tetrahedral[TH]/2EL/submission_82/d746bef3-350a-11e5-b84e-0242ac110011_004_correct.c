/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int a,b,n,sum=0;
	scanf("%d",&n);
	for(a=1;a<=n;a=a+1){
	    for(b=1;b<=a;b=b+1){
	        sum=sum+b;
	    }
	}
	printf("%d",sum);
	return 0;
}