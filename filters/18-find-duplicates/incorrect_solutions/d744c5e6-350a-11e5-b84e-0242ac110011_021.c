/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int N;/*size of the array*/
	scanf ("%d",&N);/*scanning value of N*/
	int i,x;
	i=0;
	x=0;
	int a[N];/*defining array*/
	for (i=0;i<N;i=i+1){
	  scanf ("%d",&a[i]); /*taking value of elements in array*/ 
	}
    while (i<N){
        while (x<N)
        {
            if (a[i]==a[x]){
            printf ("YES");
            }
            else {
            printf ("NO");
            }
            x=x+1;
        }
        i=i+1;
    }
	return 0;
}