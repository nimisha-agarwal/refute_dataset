/*compile-errors:e160_280541.c:8:10: warning: unused variable 'n' [-Wunused-variable]
            int n;
                ^
e160_280541.c:11:10: warning: unused variable 'r' [-Wunused-variable]
        int p,q,r;
                ^
e160_280541.c:5:8: warning: variable 'x' is uninitialized when used here [-Wuninitialized]
        int a[x];
              ^
e160_280541.c:4:7: note: initialize the variable 'x' to silence this warning
        int x,i;
             ^
              = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int x,i;
	int a[x];
	scanf ("%d",&x);
	for (i=0;i<=x;i++) {
	    int n;
	    scanf ("%d",&a[i]);
	}
	int p,q,r;
	for (p=0;p<=x;p++){
	    for (q=1;q<=x;q++){
	        if (a[p]==a[q]) {
	        printf ("YES");
	        }
	        else {
	            printf ("NO");}
	        
	    }
	}
	return 0;
}