/*compile-errors:e160_280541.c:11:11: warning: variable 'r' is used uninitialized whenever 'for' loop exits because its condition is false [-Wsometimes-uninitialized]
        for (p=0;p<=x;p++)
                 ^~~~
e160_280541.c:19:6: note: uninitialized use occurs here
        if (r ==1) {printf ("YES");}
            ^
e160_280541.c:11:11: note: remove the condition if it is always true
        for (p=0;p<=x;p++)
                 ^~~~
e160_280541.c:10:11: note: initialize the variable 'r' to silence this warning
        int p,q,r;
                 ^
                  = 0
1 warning generated.*/
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
	        r = 1;}
	    }break;
	}
	if (r ==1) {printf ("YES");}
 else {printf ("NO");}
	return 0;
}