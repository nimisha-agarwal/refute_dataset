/*execute-result:OK*/
/*compile-errors:e160_280444.c:14:12: warning: variable 's' is used uninitialized whenever 'while' loop exits because its condition is false [-Wsometimes-uninitialized]
    while (i<N){
           ^~~
e160_280444.c:29:9: note: uninitialized use occurs here
    if (s==0){
        ^
e160_280444.c:14:12: note: remove the condition if it is always true
    while (i<N){
           ^~~
           1
e160_280444.c:6:11: note: initialize the variable 's' to silence this warning
        int i,x,s;
                 ^
                  = 0
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
            break;
            }
            else {
            s=0;
            }
            x=x+1;
        }
        break;
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