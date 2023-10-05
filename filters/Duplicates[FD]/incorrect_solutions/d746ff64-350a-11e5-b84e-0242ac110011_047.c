/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int x,i;
	scanf ("%d",&x);
    int a[x];
	for (i=0;i<=x;i++) {
	    scanf ("%d",&a[i]);
	}
	int p,q,r;
	for (p=0;p<=x;p++)
	{
	    for (q=0;q<=x;q++)
	    {
	        if (a[p]==a[q]) {
	        r = 1;
	        }
	    }
	}
	if (r ==1) {printf ("YES");}
 else {printf ("NO");}
	return 0;
}