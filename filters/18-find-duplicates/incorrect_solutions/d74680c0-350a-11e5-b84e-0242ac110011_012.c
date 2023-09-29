/*compile-errors:e160_280521.c:5:12: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
        int array[N];
                  ^
e160_280521.c:4:14: note: initialize the variable 'N' to silence this warning
    int i,j,N,x;
             ^
              = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int i,j,N,x;
	int array[N];
	scanf ("%d",&N);
	for (x=0;x<=N-1;x++){
	    scanf ("%d",&array[x]);
	}
	for (i=0;i<=N-1;i++)
	for (j=0;j<=N-1;j++){
	    if (array[i]==array[j])
	    printf ("YES");
	else printf ("NO");
	}
	return 0;
}