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
	int j,k,c;
	for (j=0;j<n;j++){
	    for (k=j;k<n;k++){
	        if (a[j]==a[k]){
	            c=0;
	        } else{
	            c=1;
	        }
	    }
	}
	if (c==0){
	    printf ("YES");
	} else{
	    printf ("NO");
	}
	return 0;
}