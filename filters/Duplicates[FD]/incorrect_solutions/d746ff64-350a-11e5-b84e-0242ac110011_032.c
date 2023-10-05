/*compile-errors:e160_280541.c:5:8: warning: variable 'x' is uninitialized when used here [-Wuninitialized]
        int a[x];
              ^
e160_280541.c:4:7: note: initialize the variable 'x' to silence this warning
        int x,i;
             ^
              = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int x,i;
	int a[x];
	scanf ("%d",&x);
	for (i=0;i<=x;i++) {
	    scanf ("%d",&a[i]);
	}
	int p,q;
	for (p=0;p<=x;p++){
	    for (q=p+1;q<=x;q++){
	        if (a[p]==a[q]) {
	        printf ("YES");
	        }
	        else {
	            printf ("NO");}
	        
	    }
	}
	return 0;
}