/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int d,i,x,y,k ;
	k=1;
	scanf("%d",&d);
	int a[d];
	for( i=0; i<d; i++) {
	    scanf("%d",&a[i]);
	}
	for ( x=0; x<d; x++) {
	    for ( y=0; y<d; y++) {
	        if (x!=y) {
	            if (a[x]==a[y]) {
	            printf ("YES\n");
	            k = 10;
	            break;
	            }
	        }
	        else continue ;
	    }
	}
	if (k==1) {
	    printf("NO");
	}
	return 0;
}