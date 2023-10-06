/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int N,i,j,c=1;
	scanf("%d\n",&N);
	int arr[50];
	for(i=0;i<N;i++) scanf("%d ",&arr[i]);
	for(i=0;i<N-1;i++){
	    for(j=i;j<N;j++){
	        if(arr[i]==arr[j]){
	            c=0;
	            break;
	        }
	
	    }
	    if(!c) break;
	    
	}
	if(!c)
	    printf("YES");
	else
	    printf("NO");
	return 0;
}