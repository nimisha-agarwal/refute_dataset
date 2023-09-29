/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
	int a[n];
	int i;
	for(i=0; i<n; i++){
	    scanf("%d", &a[i]);
	}
	int x;
	int y;
	for(x=0; x<n; x++){
	    for(y=0; y<n; y++){
	        if(x==y){continue;}
	        else{
	            if(a[x]==a[y]){
	                break;
	            }
	        }
	    }
	        if(a[x]==a[y]){
	                printf("YES");
	                break;
	        }
    }
	return 0;
}