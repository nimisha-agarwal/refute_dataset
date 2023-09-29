/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int n;
	scanf ("%d",&n); //input of array size
	int a[n];
	int i;
	for (i=0;i<n;i++){
	    scanf ("%d ",&a[i]); //input of array element
	    }
	int j,k,c = 0; // initialise c=0
	for (j=0;j<n;j++){
	    for (k=j+1;k<n;k++){
	        if (a[k]==a[j]){ //checking is there any equal element
	            printf ("YES"); //print YES
	            c = 1; //put c=1 for equal element
	        }
	    }
	}
	if (c!=1){ //c not equal to 1 means no equal
	    printf ("NO"); //print NO for no element equal
	}
	
	return 0;
}