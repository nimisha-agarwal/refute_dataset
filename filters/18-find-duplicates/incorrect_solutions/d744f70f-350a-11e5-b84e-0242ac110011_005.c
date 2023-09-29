/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int arr[50];
	int n;
	int count=0;
	int in;
	scanf("%d",&n);
	while(count<n){
	    scanf("%d",&in);
	    arr[count]=in;
	    count=count+1;
	}
	return 0;
}