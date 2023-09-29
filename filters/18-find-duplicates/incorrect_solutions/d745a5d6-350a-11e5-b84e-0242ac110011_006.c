/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int a[30],i,num;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	printf("%d",a[i]);
	
	
	return 0;
}