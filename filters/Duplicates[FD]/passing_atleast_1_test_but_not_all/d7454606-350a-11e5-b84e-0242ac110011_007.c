/*compile-errors:e160_280458.c:12:11: warning: variable 'c' is used uninitialized whenever 'for' loop exits because its condition is false [-Wsometimes-uninitialized]
        for (j=0;j<n;j++){
                 ^~~
e160_280458.c:20:6: note: uninitialized use occurs here
        if (c!=0){
            ^
e160_280458.c:12:11: note: remove the condition if it is always true
        for (j=0;j<n;j++){
                 ^~~
e160_280458.c:11:11: note: initialize the variable 'c' to silence this warning
        int j,k,c;
                 ^
                  = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int n;
	scanf ("%d",&n);
	int a[n];
	int i;
	for (i=0;i<n;i++){
	    scanf ("%d ",&a[i]);
	    }
	int j,k,c;
	for (j=0;j<n;j++){
	    for (k=j+1;k<n;k++){
	        if (a[k]==a[j]){
	            c=0;
	            printf ("YES");
	        } 
	    }break;
	}
	if (c!=0){
	    printf ("NO");
	} 
	return 0;
}