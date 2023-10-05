/*compile-errors:e160_280541.c:13:17: warning: variable 'r' is used uninitialized whenever 'for' loop exits because its condition is false [-Wsometimes-uninitialized]
            for (q=p+1;q<x;q++)
                       ^~~
e160_280541.c:22:6: note: uninitialized use occurs here
        if (r ==1) {printf ("YES");}
            ^
e160_280541.c:13:17: note: remove the condition if it is always true
            for (q=p+1;q<x;q++)
                       ^~~
e160_280541.c:11:11: warning: variable 'r' is used uninitialized whenever 'for' loop exits because its condition is false [-Wsometimes-uninitialized]
        for (p=0;p<x;p++)
                 ^~~
e160_280541.c:22:6: note: uninitialized use occurs here
        if (r ==1) {printf ("YES");}
            ^
e160_280541.c:11:11: note: remove the condition if it is always true
        for (p=0;p<x;p++)
                 ^~~
e160_280541.c:10:11: note: initialize the variable 'r' to silence this warning
        int p,q,r;
                 ^
                  = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int x,i;
	scanf ("%d",&x);
    int a[x];
	for (i=0;i<x;i++) {
	    scanf ("%d",&a[i]);
	}
	int p,q,r;
	for (p=0;p<x;p++)
	{
	    for (q=p+1;q<x;q++)
	    {
	        if (a[p]==a[q]) {
	        r = 1;
	           break; 
	        }
	    }	       
	       break;
	}
	if (r ==1) {printf ("YES");}
 else {printf ("NO");}
	return 0;
}