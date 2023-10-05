/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int N;/*size of the array*/
	scanf ("%d",&N);/*scanning value of N*/
	int i,x,s;
	i=0;
	x=0;
	int a[N];/*defining array*/
	for (i=0;i<N;i=i+1){
	  scanf ("%d",&a[i]); /*taking value of elements in array*/ 
	}
	i=0;
    while (i<N){
        x=i+1;
        while (x<N)
        {
            if (a[i]==a[x]){
            s=1;
            break;
            }
            else {
            s=0;
            }
            x=x+1;
        }
        if (s==1) break;
        i=i+1;
    }
    if (s==0){
    printf ("NO");    
    }
    else {
    printf ("YES");
    }
	return 0;
}