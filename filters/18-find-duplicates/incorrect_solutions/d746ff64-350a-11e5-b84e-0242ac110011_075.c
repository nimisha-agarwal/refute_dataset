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
	        for (;p!=q;)
	        {
	        if (a[p]==a[q]) {
	        r = 1;}
	       if (a[p]!=a[q]) {
	            r =0; }
	        }
	    }
	}
	if (r ==1) {printf ("YES");}
	 else if (r ==0) {printf ("NO");}
	return 0;
}