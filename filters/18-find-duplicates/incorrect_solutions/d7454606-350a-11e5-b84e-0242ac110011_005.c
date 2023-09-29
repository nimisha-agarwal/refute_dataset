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
	    scanf ("%d ",&a[i]);
	    }
	int j,k,c = 0;
	for (j=0;j<n;j++){
	    for (k=j+1;k<n;k++){
	        if (a[k]==a[j]){
	            printf ("YES");
	            c = 1;
	        }
	    }
	}
	if (c!=1){
	    printf ("NO");
	}
	
	return 0;
}