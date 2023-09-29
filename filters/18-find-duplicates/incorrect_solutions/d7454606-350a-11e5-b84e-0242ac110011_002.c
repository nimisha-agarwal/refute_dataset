/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int n;
	scanf ("%d",&n);
	int a[n];
	int i;
	for (i=0;i<n;i++){
	    scanf ("%d",&a[i]);
	    }
	return 0;
}