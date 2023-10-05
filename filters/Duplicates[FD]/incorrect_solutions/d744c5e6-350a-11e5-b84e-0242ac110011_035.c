/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int N;/*size of the array*/
	scanf ("%d",&N);/*scanning value of N*/
	int i,x;
	int a[N];/*defining array*/
	for (i=0;i<N;i=i+1){
	  scanf ("%d",&a[i]); /*taking value of elements in array*/ 
	}
    for (i=0;i<N;i=i+1){
        for (x=0;x<N;x=x+1)
        {
            if (a[i]==a[x]){
            printf ("YES");
            }
            else {
            printf ("NO");
            }
        }
    }
	return 0;
}