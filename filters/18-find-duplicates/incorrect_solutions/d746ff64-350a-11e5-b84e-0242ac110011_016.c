/*compile-errors:e160_280541.c:13:12: warning: inequality comparison result unused [-Wunused-comparison]
            for (q!=p;q<=x;q++)
                 ~^~~
e160_280541.c:13:12: note: use '|=' to turn this inequality comparison into an or-assignment
            for (q!=p;q<=x;q++)
                  ^~
                  |=
e160_280541.c:10:8: warning: unused variable 'q' [-Wunused-variable]
        int p,q,r;
              ^
2 warnings generated.*/
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
	{int q = 0;
	    for (q!=p;q<=x;q++)
	    {
	        if (a[p]==a[q]) {
	        r = 1;}
	    }
	}
	if (r ==1) {printf ("YES");}
 else {printf ("NO");}
	return 0;
}