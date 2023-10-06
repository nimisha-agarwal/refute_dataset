/*compile-errors:e160_280444.c:27:10: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if (s=0){
        ~^~
e160_280444.c:27:10: note: place parentheses around the assignment to silence this warning
    if (s=0){
         ^
        (  )
e160_280444.c:27:10: note: use '==' to turn this assignment into an equality comparison
    if (s=0){
         ^
         ==
1 warning generated.*/
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
        while (x<N)
        {
            if (a[i]==a[x]&&i!=x){
            s=1;
            }
            else {
            s=0;
            }
            x=x+1;
        }
        i=i+1;
    }
    if (s=0){
    printf ("NO");    
    }
    else {
    printf ("YES");
    }
	return 0;
}