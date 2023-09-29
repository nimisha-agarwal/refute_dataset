/*compile-errors:e160_280469.c:29:9: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if(k=0){
       ~^~
e160_280469.c:29:9: note: place parentheses around the assignment to silence this warning
    if(k=0){
        ^
       (  )
e160_280469.c:29:9: note: use '==' to turn this assignment into an equality comparison
    if(k=0){
        ^
        ==
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int k=0;
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
	                    k=1;
	                    break;
	        }
    }
    if(k=0){
        printf("NO");
    }
	return 0;
}